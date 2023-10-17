Clobbering
----------

Besides general purpose registers, we can pass two special specifiers

	cc
	memory

cc
--------

cc indicates that an assembler code modifies flag register.
This is typically used if the assembly statements contains arithmetic and logic instructions.

Example: asm volatile("incq %0" ::""(variable): "cc");

memory
-----------

informs compiler that the given inline assembly statement executes read/write operations on memory not specified by operands in the output list.

This prevents the compiler from keeping memory values loaded and cached in registers


Why is the result not as expected?
------------------------------------

Why is the result not as expected?
------------------------------------

Compiler optimizations
-------------------------------------
$ gcc -O3 userprog.c -o userprog

