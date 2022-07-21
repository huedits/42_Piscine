#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int nb = 3;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	char dest2[20] = "123";
	char src2[] = "4567890";
	
	printf("\n\n-----\ndest = %s\nsrc = %s\nnb = %d\n", dest2, src2, nb);
	strncat(dest2, src2, nb);
	printf("result = %s\n-----\n", dest2);


	return (0);
}
