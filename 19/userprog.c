#include <stdio.h>

int main(void)
{
    int x = 10, y;
     
    asm ("movl %1, %%eax\n"
         "movl %%eax, %0;"
        :"=r"(y)    /* y is output operand */
        :"r"(x)     /* x is input operand */
	:"%eax"    /* %eax is clobbered register */
        );
    printf("value of x is %d\n", x);
    return 0;
}
