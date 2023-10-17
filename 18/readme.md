Matching Constraints
----------------------

In some cases, a single variable may serve as both input and output operand

Such cases may be specified in asm by using matching constraints.

why do matching constraints exist when you can just use "+r"(var) for a read/write operand, instead of the more complicated matching-constraint syntax?"
=================================================================================================================
why do matching constraints exist when you can just use "+r"(var) for a read/write operand, instead of the more complicated matching-constraint syntax?"
=================================================================================================================

They're rarely useful.

If you don't want to use the same C var for input and output, but still need them to pick the same register or memory, then you want a matching constraint
