#include <stdio.h>

int main()
{
	int a = 2;
	int b = 3;
	int sum;

	asm ("addl %%eax, %%edx"
	     : "=a"(sum) /* Output register */
	     : "a" (a), "d"(b) /* Input register */
	);
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	printf("sum:%d\n", sum);

	return 0;
}
