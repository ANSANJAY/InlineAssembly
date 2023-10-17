Why is the output not as expected?
=====================================
Why is the output not as expected?
=====================================

By default, gcc will assume that an inline asm block will finish using the input operands before updating the output operands.

This means that both an input and an output may be assigned to the same register.
