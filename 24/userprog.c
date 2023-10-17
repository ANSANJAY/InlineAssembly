#include <stdio.h>

int main(void)
{
        static unsigned long arr[3] = {0, 1, 2};
        static unsigned long num;

        asm volatile("movq 16+%1, %0" : "=r"(num) : "o"(arr));
        printf("%lu\n", num);
        return 0;
}
