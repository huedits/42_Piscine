#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	char dest2[20] = "Hello";
	char src2[] = ", world!";

	printf("\n\n-----\ndest = %s\nsrc = %s\n", dest2, src2);
	strcat(dest2, src2);
	printf("result = %s\n-----\n", dest2);

	return (0);
}
