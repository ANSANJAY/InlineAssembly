Constraint String
-----------------

A constraint is a string which specifies placement of an operand.

For example the value of an operand may be 

	written to a processor register (which register to choose) or 

	read from memory etc.


r: The operand is stored in a general-purpose register. 
	GCC can choose any register here


Constraints may also have modifiers which provide additional control over the behavior of the operands

=: Operand is write-only
+: Operand is both read and written
&: Operand is clobbered early

