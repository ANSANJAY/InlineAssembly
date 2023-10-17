#include <stdio.h>

int main(void)
{
        unsigned int a = 5;
        unsigned int b = 10;
        unsigned int sum = 0;

        asm volatile(   "movl $100, %%edx\n"
			"addl %1,%2" : 
			"=r" (sum) : 
			"r" (a), "0" (b):
			"%edx");
        printf("a + b = %u\n", sum);
        return 0;
}
