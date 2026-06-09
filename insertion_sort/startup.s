.section .vector_table, "ax"
.global reset_handler
reset_handler:
    li sp, 32
    jal ra, main
1:  j 1b
