Extended Format
----------------

asm volatile(assembler template
		: output operands                   (optional)
		: input operands                    (optional)
		: clobbered registers list          (optional)
	    );


assembler template
--------------------
	
	specifies the instructions to execute
	each instruction should be separated by \n character
	example:
	asm ("nop\n"
	     "nop\n"
	     "nop");

	In the assembler template, each operand is referenced by numbers. Numbering is done as follows. If there are a total of n operands (both input and output inclusive), then the first output operand is numbered 0, continuing in increasing order, and the last input operand is numbered n-1
	where %0 is the first operand, %1 is the second, and so on, and %N-1 is the last operand

output and input operands
--------------------------

	Each operand is described by an operand-constraint string followed by the C expression in parentheses
	"constraint" (variable)

	
	colon (:)  separates the assembler template from the first output operand
	one more colon(:) separates the last output operand from the first input
	commas(,) separate the operands within each group
	

	
	
