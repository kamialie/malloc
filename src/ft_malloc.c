#include "malloc.h"

t_small_page	*pages = NULL;

void	create_page(void)
{
	t_small_page	*page;

	page = mmap(NULL, size, PROT_NONE, MAP_PRIVATE | MAP_ANON, -1, 0);
	page->next = NULL;
	page->n_blocks = 4096 / 16;
	pages = page;
}

/*void	find_space(t_small_page *page)
{

}*/

void	*ft_malloc(size_t size)
{
	void	*allocation;

	printf("MALLOC!\n");
	allocation = mmap(NULL, size, PROT_NONE, MAP_PRIVATE | MAP_ANON, -1, 0);
	if (page == NULL)
		create_page();
	printf
	return (allocation);
}
