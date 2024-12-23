# Simple kernel module

Simple kernel module programmed for kernel version `6.8.0-51-generic`. This repository was created in order to understand how to program a kernel module, compile, load and remove it.
## Compilation process

Compile the module using make

```shell
$ make
```

Once compiled load it into the kernel

```shell
sudo insmod hello-1.ko
```

Now using the `lsmod` command you can see it, if you want to see the `Hello World` string you can use `sudo dmesg`.

```shell
$ sudo dmesg
...
[ 7659.352222] Hello, world 2
...
```

To remove the module from the kernel you can use `rmmod`.

```shell
$ sudo rmmod hello-1
```

## References

- [The Linux Kernel Module Programming Guide](https://sysprog21.github.io/lkmpg/)
