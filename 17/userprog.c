#include <stdio.h>

int main()
{
	void *stack_ptr;
	asm ("movq %%rsp, %0"
	     : "=g"(stack_ptr)
	);
	printf("stack_ptr:%p\n", stack_ptr);
	return 0;
}
