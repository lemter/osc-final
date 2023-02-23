#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

static int __init hello_start(void) {
	printk(KERN_INFO "Create by Karim, Madi, Omar.\n");
	return 0;
}

static void __exit hello_end(void) {
	printk(KERN_INFO "Goodbye!\n");
}

module_init(hello_start);
module_exit(hello_end);

