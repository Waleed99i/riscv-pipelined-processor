.section .vector_table, "ax"
.global reset_handler
reset_handler:
    la sp, _sp
    jal ra, main
1:  j 1b
