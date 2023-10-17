GCC 
----------

GCC supports two kinds of assembly statements:
	basic
	extended

Basic
----------

The basic form consists of only two things
	asm keyword
	string with valid instructions

Ex: 
	 asm("hlt");
   	 asm("nop");

Extended
----------

	asm volatile ( assembler template
			: output operands                   (optional)
			: input operands                    (optional)
			: clobbered registers list          (optional)
		     );

volatile informs the compiler specifies that the assembly statement may produce side effects
