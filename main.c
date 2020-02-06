#include "malloc.h"

int	main(void)
{
	char	*str;
	size_t	number;

	str = ft_malloc(50);
	free(str);
	return (0);
}
