#ifndef MALLOC_H
# define MALLOC_H

#include <stdlib.h>
#include <sys/mman.h>

// TEMPRORARY
#include <stdio.h>
//END

# define CHUNKS_PER_POOl 100

typedef struct		s_chunk
{
	struct s_chunk	*next;
	void			*data;
}					t_chunk;

typedef struct		s_zones
{
	t_chunk	tiny;
	t_chunk	small;
	t_chunk large;
	t_chunk	tiny_free;
	t_chunk	small_free;
}					t_zones;

void	*ft_malloc(size_t size);

#endif
