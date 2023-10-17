#include <stdio.h>
#include <stdint.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum;

    asm volatile(
        "movl %2, %0\n"
        "addl %1, %0"
        :"=&r"(sum)
        : "r"(num1), "r"(num2)
    );

    printf("num1:%d\n", num1);
    printf("num2:%d\n", num2);
    printf("sum:%d\n", sum);
    return 0;
}

