#ifndef MALLOC_H
# define MALLOC_H

#include <stdlib.h>
#include <sys/mman.h>

// TEMPRORARY
#include <stdio.h>
//END

# define CHUNKS_PER_POOl 100

/*typedef struct	s_records
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
*/

typedef struct		s_chunck
{
	unsigned long	size: 63;
	unsigned long	used: 1;
	struct s_chunk	*next;
}					t_chunk;

typedef struct		s_box
{
	size_t	size;
	int		is_free;
}					t_box;

typedef struct		s_zone
{
	struct s_zone	*next;
}					t_zone;

typedef struct		s_chunk
{
	unsigned int long	size: 63;
	unsigned int long	free: 1;
	struct s_chunk		*next;
	struct s_chunk		*prev;
}					t_chunk;

typedef struct		s_arena
{
	t_bucket		*tiny;
}					t_arena;

/*typedef struct		s_zones
{
	t_box	tiny;
	t_box	small;
}					t_zones;
*/
void	*ft_malloc(size_t size);

#endif
