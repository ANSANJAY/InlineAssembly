#include <stdio.h>

int main()
{
	int val  = 3;
	asm ("movl %1, %0"
	     : "=r"(val)
	     : "i" (10)
	);
	printf("val is %d\n", val);
	return 0;
}
