#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
static int __init test_hello_init(void)
{
	unsigned int cr3val = 0;
	asm("mov %%cr3, %0\n"
			:"=r"(cr3val)); //=r stored in general purpose register
	pr_info("cr3val:%x\n", cr3val);

	return 0;
}

static void __exit test_hello_exit(void)
{
}

module_init(test_hello_init);
module_exit(test_hello_exit);
