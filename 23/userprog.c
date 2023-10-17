#include <stdio.h>

int main(void)
{
	unsigned long num = 3;

        asm("movq %1, %0" :
		"=r"(num): //output operand
		 "I" (0xff00aaffaaff) //input operand
	);
        printf("num= %lu\n", num);
        return 0;
}
