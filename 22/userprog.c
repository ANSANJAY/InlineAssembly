#include <stdio.h>

int main(void)
{
	unsigned long a[5] = {1000, 10, 20, 30, 40};
	unsigned long num = 3;

        asm("incq %0" :
		: //output operand
		 "m" (a[0]): //input operand
		"memory"
	);
        printf("a[0]= %lu\n", a[0]);
        printf("a[0] - num= %lu\n", a[0] - num);
        return 0;
}
