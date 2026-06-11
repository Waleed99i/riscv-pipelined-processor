OUTPUT_ARCH( "riscv" )
ENTRY( reset_handler )

MEMORY
{ 
  RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 1024  /* 256 32-bit words for both imem and dmem */
}


SECTIONS
{
  __stack_size = DEFINED(__stack_size) ? __stack_size : 200;

  .vector_table :
  {
    KEEP (*(SORT_NONE(.vector_table)))
  } >RAM

  .text :
  {
    *(.text.main)
    *(.text .text.*)
  } >RAM

  .rodata :
  {
    *(.rodata .rodata.*)  
    *(.srodata .srodata.*)
  } >RAM
  .data 0x00000200 :
  {
    _sdata = .;
    *(.rdata) 
    *(.data .data.*)
    *(.sdata .sdata.*)
    . = ALIGN(4);
    _edata = .;
  } >RAM

  PROVIDE( _edata = . );
  PROVIDE( edata = . );
  PROVIDE( _fbss = . );
  PROVIDE( __bss_start = . );

  .bss :
  {
    _sbss = .;
    *(.sbss*)
    *(.bss .bss.*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;
  } >RAM

  . = ALIGN(8);
  PROVIDE( _end = . );
  PROVIDE( end = . );

  .stack ORIGIN(RAM) + LENGTH(RAM) - __stack_size :
  {
    PROVIDE( _heap_end = . ); 
    . = __stack_size;  
    PROVIDE( _sp = . ); 
  } >RAM

  ASSERT(SIZEOF(.vector_table) + SIZEOF(.text) + SIZEOF(.rodata) + SIZEOF(.data) + SIZEOF(.bss) + __stack_size <= LENGTH(RAM),
         "memory overflow: program does not fit in 256 words")
}
