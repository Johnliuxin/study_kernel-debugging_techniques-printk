#include <linux/init.h>
#include <linux/module.h>

/* 
 * Another special macro (MODULE_LICENSE) is used to tell the kernel that this 
 * module bears a free license; without such a declaration, the kernel 
 * complains when the module is loaded.
 */
MODULE_LICENSE("Dual BSD/GPL");

static int __init hello_init(void)
{
	printk(KERN_DEBUG "hello_init KERN_DEBUG\n");

	return 0;
}

static void hello_exit(void)
{
	printk(KERN_DEBUG "hello_exit KERN_DEBUG\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("John LiuXin");
MODULE_DESCRIPTION("Example of debugging techniques : printk");