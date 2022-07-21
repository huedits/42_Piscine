#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int size = 6;
	unsigned int result;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);

	char dest2[20] = "123";
	char src2[] = "4567890";
	printf("\n\n\n-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest2, src2, size);
	result = strlcat(dest2, src2, size);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest2, result);
	return (0);
}
