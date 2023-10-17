#include <stdio.h>

int main()
{
	int a = 2;
	int b = 3;
	int sum;

	asm ("addl %1, %2\n"
	     "movl %2, %0"
	     : "=r"(sum) /* Output register */
	     : "0" (a), "r"(b) /* Input register */
	);
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	printf("sum:%d\n", sum);

	return 0;
}
