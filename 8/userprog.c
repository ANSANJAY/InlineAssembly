#include <stdio.h>

int main()
{
	int a = 2;
	int b;

	asm ("movl %1, %%eax\n"
	     "movl %%eax, %0"
	     : "=r"(b) /* Output register */
	     : "r" (a) /* Input register */
	     : "%eax"); /* Modified registers */

	printf("a:%d\n", a);
	printf("b:%d\n", b);

	return 0;
}
