//#include "malloc.h"

#include <unistd.h>
#include <malloc.h>

int	main(void) {
	char	*str;
	char	*str1;
	char	*str2;
	size_t	number;
	int		size;

	size = getpagesize();
	printf("pointer size - %lu size_t size - %lu\n", sizeof(str), sizeof(size_t));
	printf("page size - %d\n", size);
	printf("pointer size - %lu\n", sizeof(str));
	//str = ft_malloc(160000);
	//printf("mmap - %p\n", str);
	str1 = malloc(16);
	for (int i = 0; i < 27; i++) {
		str1[i] = 'a' + i;
	}
	str1[15] = '\0';
	//printf("size - %lu\n", malloc_usable_size(str1));
	printf("contents - %s\n", str1);
	str2 = malloc(16);
	for (int i = 0; i < 25; i++) {
		str2[i] = 'a' + i;
	}
	str1[15] = '\0';
	//printf("size - %lu\n", malloc_usable_size(str2));
	printf("contents - %s\n", str2);
	printf("1 - %p 2 - %p\n", &str1[27], str2);
	str1[0] = 'a';
	str1[1] = '\0';
	printf("malloc - %p value - %s\n", str1, str1);
	str2 = malloc(16);
	str2[0] = 'z';
	str2[1] = '\0';
	char *str3 = malloc(0);
	//str1[16] = 'b';
	//printf("sub - %p\n", &(str1[16]));
	printf("malloc - %p, value - %s\n", str2, str2);
	//printf("malloc size - %d\n", malloc_size(str1));
	free(str2);
	str2 = malloc(0);
	printf("malloc - %p, value - %s\n", str2, str2);
	//str = malloc(0);
	//printf("malloc - %p\n", str);
	//str = malloc(1025);
	//printf("malloc - %p\n", str);
	/*for (int i = 0; i < 270000; i++) {
		str = malloc(15);
	}
	printf("malloc - %p\n", str);*/
	//str = malloc(30000);
	//printf("malloc - %p\n", str);
	//free(str);
	//printf("local - %p\n", &number);
	str = malloc(16);
	str++;
	free(str);
	return (0);
}
