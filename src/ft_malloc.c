#include "malloc.h"

void	*ft_malloc(size_t size)
{
	void	*allocation;

	printf("MALLOC!\n");
	allocation = mmap(NULL, size, PROT_NONE, MAP_PRIVATE | MAP_ANON, -1, 0);
	return (allocation);
}
