GCC Assembly
------------

GCC by default uses AT&T assembly syntax.

Summary of Syntax
-------------------

1. instruction source, destination

	The source register is always specified before the destination register.
	mov %eax, %ebx, transfers the contents of eax to ebx.

2. %register
	
	Register names are prefixed with a percent sign (%)
	Two percent sign must be specified in C source code in order to generate one percent symbol in output that is forwarded to the assembler program.

3. $literal

	Literal values are prefixed with a dollar sign
	Example $10: is decimal 10, $0x10 is hexadecimal and value is 16
	movl $0xffff, %eax

4. Operand size

	specified  by a suffix after the assembler statement
	b stands for byte, l for long, and w for word, q for quad
	To move long value from register eax to register ebx, it is therefore necessary to specify movl %eax, %ebx

5. Indirect memory reference

	de-referencing of pointers are possible by including a register in parentheses.
	movl (%eax), %ebx moves the long value at the address in memory pointed to by the value of register eax to the register ebx

6. offset(register)

	specifies that the register value is to be used together with an offset that is added to its actual value
	8(%eax) specifies that eax + 8 is to be used as an operand
	This notation is used primarily for memory access — for example, to specify offsets from the stack or frame pointer in order to access certain local variables
