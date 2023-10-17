#include <stdio.h>

int main()
{
	int val = 0;

	asm ("movl %%eax, %0"
		:"=r"(val));

	printf("val:%d\n", val);
	return 0;
}
