#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("abund4nt");
MODULE_DESCRIPTION("Basic kernel module");

int init_module()
{
    printk(KERN_INFO "Hello world module loaded!\n");
    return 0;
}

void cleanup_module()
{
    printk(KERN_INFO "Hello world module unloaded!\n");
}
