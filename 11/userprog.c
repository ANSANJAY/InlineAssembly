#include <stdio.h>

//rax register is used to store the return value
int get_random_value()
{
	long int random_value = 10;
	asm("movq %0, %%rax"
		:
		:"r" (random_value)
	);
}

int main()
{
	printf("get_random_value:%d\n", get_random_value());
	return 0;
}
