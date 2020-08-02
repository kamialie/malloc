#include "malloc.h"

/*
** arguments from first to last:
** let kernel decide the location
** size of allocated region (should be multiple of page size)
** read and write rights
** owned by process reguesting it ?
** no file descriptor
** no offset (might be needed for reallocating big regions)
**
** allocation = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);
*/

/*t_small_page	*pages = NULL;

void	create_page(void)
{
	t_small_page	*page;

	page = mmap(NULL, size, PROT_NONE, MAP_PRIVATE | MAP_ANON, -1, 0);
	page->next = NULL;
	page->n_blocks = 4096 / 16;
	pages = page;
}
*/
/*void	find_space(t_small_page *page)
{

}*/

//t_box	*head = NULL;

//t_allocs	*allocs = NULL;

//void	*get_tiny_alloc(t_box	

t_zones	initialize_zones(void)
{
	void	allocation;
	t_zones	zones;

	allocation = mmap(...);

}

void	*ft_malloc(size_t size)
{

	static int		page_size;
	static t_zones	zones = NULL;

	printf("MALLOC!\n");

	page_size = getpagezize();

	if (zones == NULL)
		zones = initialize_zones()

	/*if (size < 128)
		allocation = get_tiny_allocation(allocs);

	if (page == NULL)
		create_page();
	printf*/
	printf("size - %lu\n", sizeof(int *));
	return (allocation);
}
