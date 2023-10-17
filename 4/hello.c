#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
static int __init test_hello_init(void)
{
    asm("cli");//will disable the interrupts
    asm("hlt");//will halt the cpu until the next external interrupt is fired
    return 0;
}

static void __exit test_hello_exit(void)
{
}

module_init(test_hello_init);
module_exit(test_hello_exit);
