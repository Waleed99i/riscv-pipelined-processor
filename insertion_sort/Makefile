BUILD_DIR = $(abspath ./build)
SRC_PATH = $(abspath ./src)
SRCS = $(wildcard $(SRC_PATH)/*.c) startup.s
ELF = $(BUILD_DIR)/main.elf
BIN = $(BUILD_DIR)/main.bin
TXT = $(BUILD_DIR)/main.txt
DUMP = $(BUILD_DIR)/main.dump

run: $(BIN)

$(ELF): $(SRCS)
	@mkdir -p $(BUILD_DIR)
	@riscv64-unknown-elf-gcc -o $@ $^ -T linker.ld -nostdlib -march=rv32i -mabi=ilp32 -ffunction-sections -fdata-sections && echo "BUILT $(notdir $@)"

$(BIN): $(ELF)
	@riscv64-unknown-elf-objcopy -O binary --only-section=.vector_table --only-section=.data* --only-section=.text* --only-section=.rodata* $^ $@ && echo "BUILT $(notdir $@)"
	@python maketxt.py $(BIN) > $(TXT) && echo "BUILT $(notdir $(TXT))"
	@riscv64-unknown-elf-objdump -S -s $(ELF) > $(DUMP) && echo "BUILT $(notdir $(DUMP))"

clean: 
	rm -rf $(BUILD_DIR)

.PHONY: clean
