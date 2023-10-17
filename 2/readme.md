Example of speed with inline assembly
---------------------------------------

The x86 architecture includes instructions that determine 
	the positions of the least significant set bit and 
	the most significant set bit in a word.

Implementing the same operation in C require a loop and a bit shift.

bsrl
----------

Instruction computes the position of most significant bit set in first operand, places the bit position into second operand.


