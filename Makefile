VERILATOR ?= verilator
SRC := $(wildcard src/*.sv)
TB_SRCS := $(wildcard tests/tb_*.sv)
TESTS := $(patsubst tests/%.sv,%,$(TB_SRCS))

GREEN  := \033[0;32m
YELLOW := \033[0;33m
RED    := \033[0;31m
BLUE   := \033[0;34m
RESET  := \033[0m

.PHONY: all test run clean
all: test

# Run all tests by default.
test: $(TESTS)
	@echo "$(GREEN)[PASS] All $(words $(TESTS)) tests passed.$(RESET)"

# Individual test targets.
$(TESTS): %: obj_dir
	@rm -f obj_dir/sim_main.o obj_dir/sim_main.d
	@$(VERILATOR) --cc --exe -sv --timing --top-module $* -Isrc $(SRC) tests/$*.sv tests/sim_main.cpp -CFLAGS "-DTOP_CLASS=V$*" -Mdir obj_dir -o V$*
	@$(MAKE) -C obj_dir -f V$*.mk -j -s
	@./obj_dir/V$*

run: test

obj_dir:
	@mkdir -p obj_dir

clean:
	@rm -rf obj_dir
