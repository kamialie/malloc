#ifndef MALLOC_H
# define MALLOC_H

#include <stdlib.h>
#include <sys/mman.h>

// TEMPRORARY
#include <stdio.h>
//END

typedef struct	s_records
{
	void	*addr;
	size_t	size;
}				t_records;

typedef struct	s_small_block
{
	char	block[16];
}				t_small_block;

typedef struct	s_small_page
{
	struct s_small_page	*next;
	int					n_blocks;
	t_small_block		*blocks;
}				t_small_page;

void	*ft_malloc(size_t size);

#endif
