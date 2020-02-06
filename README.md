# malloc
Recoding of standard C library malloc funtion

## Prerequisites

### mmap (system call)

`void *mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset)`

+ `addr` - starting at
+ `len` - number of bytes
+ `fd` - object
+ `offset` - offset to start with

Allocates memory or maps files or devices into memory.


On successful completion returns the address of to the mapped region.

### munmap (system call)

`int munmap(void *addr, size_t len)`


Removes the mappings for the specified address range, causing futher references to the addresses within the range to generate invalid memory references.

### getpagesize (library function)

**#include <unistd.h>**

`getpagesize(void)`

Returns number of bytes in a page. It is the system page size, thus may not be the same as the underlying hardware page size

### getrlimit (system call)

**#include <sys/resource.h>**

`getrlimit(int resource, struct rlimit *rlp)`

Get the limits on the consumption of the system resources. A resource limit has a soft and hard limits. Reaching soft limit leads to process to receive a signal (still can continue to execute), while reaching hard limit terminates it.

### libpthread (POSIX threads library)

## Compilation

On linux set the value:
`export LD_LIBRARY_PATH=$PWD`
