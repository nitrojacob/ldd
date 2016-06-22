#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("Dual MIT/GPL");
MODULE_AUTHOR("nitrojacob");
MODULE_DESCRIPTION("Hello World module to learn basic syntax of linux device drivers");


static int __init hello_init(void)
{
  printk(KERN_INFO "Function hello_init called\n");
  return 0;
}

static void __exit hello_exit(void)
{
  printk(KERN_INFO "Function hello_exit called\n");
}

module_init(hello_init);
module_exit(hello_exit);

