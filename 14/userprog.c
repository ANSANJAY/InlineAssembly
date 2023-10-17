#include <stdio.h>

int main()
{
	int a = 2;
	int b = 3;
	int c = 4;
	int sum;

	asm ("mov %3, %%ecx\n"
	      "addl %%ecx, %%edx\n"
		"addl %%eax, %%edx"
	     : "=d"(sum) /* Output register */
	     : "a" (a), "d"(b), "m"(c) /* Input register */
	);
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	printf("c:%d\n", c);
	printf("sum:%d\n", sum);

	return 0;
}
