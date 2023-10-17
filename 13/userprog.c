#include <stdio.h>

int main()
{
	int a;
	int b;
	int sum;
	int sub;
	int mul;
	int div;
	int rem;

	printf("\nEnter value of a:");
	scanf("%d", &a);
	printf("\nEnter value of b:");
	scanf("%d", &b);

	asm ("addl %%eax, %%edx"
	     : "=d"(sum) /* Output register */
	     : "a" (a), "d"(b) /* Input register */
	);
	printf("sum:%d\n", sum);

	asm ("subl %%eax, %%edx"
	     : "=d"(sub) /* Output register */
	     : "a" (a), "d"(b) /* Input register */
	);
	printf("sub:%d\n", sub);

	asm ("imull %%eax, %%edx"
	     : "=d"(mul) /* Output register */
	     : "a" (a), "d"(b) /* Input register */
	);
	printf("mul:%d\n", mul);

	//idivl divides the value of edx:eax by its operand
	// stores the remainder in edx
	//  stores the quotient in eax
	asm ("  movl $0, %%edx\n"
		"idivl %%ebx"
	     : "=a"(div), "=d"(rem) /* Output register */
	     : "a" (a), "b"(b) /* Input register */
	);
	printf("div:%d\n", div);
	printf("rem:%d\n", rem);

	return 0;
}
