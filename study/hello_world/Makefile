CONFIG_MODULE_SIG=n

obj-m := hello.o
KERNEL_DIR = /lib/modules/$(shell uname -r)/build
PWD = $(shell pwd)

.PHONY: default, clean

default:
	make -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules
clean:
	make -C $(KERNEL_DIR) SUBDIRS=$(PWD) clean
