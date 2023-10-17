Clobberring
----------------

It is important to remember one thing: The C/C++ compiler knows nothing about Assembler. 

Compiler doesn't parse the assembly statements inside asm()

As the compiler uses CPU registers for internal optimization of our C variables, and doesn't know about asm statements. You have to warn it about any registers that might get clobbered/thrashed as a side effect, so the compiler can save their contents before making our asm()

The cloberred section should contain a comma-separated list of registers whose contents will be modified by assembler code/assembler template

If we add cloberred registers to the inline assembly statement, the compiler takes the registers into account and  will not be used by the compiler.


