#include <stdio.h>

int main()
{
	int val1  = 3;
	int val2  = 4;

	asm ("mov %0, %%ecx\n"
	     "mov %1, %%ecx\n"
	     "mov %2, %%ecx\n"
	     :
	     : "r"(val1), "m"(val2), "i"(5)
	);

	return 0;
}
