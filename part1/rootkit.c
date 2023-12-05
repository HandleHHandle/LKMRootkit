#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("HandleHHandle");
MODULE_DESCRIPTION("A completely innocent kernel module");
MODULE_VERSION("0.01");

static int __init rootkit_init(void) {
  printk(KERN_INFO "Hello world\n");
  return 0;
}

static void __exit rootkit_exit(void) {
  printk(KERN_INFO "Goodbye world\n");
}

module_init(rootkit_init);
module_exit(rootkit_exit);
