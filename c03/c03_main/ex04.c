#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "012340123456789";
	char to_find[] = "456";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	char str2[] = "012340123456789";
	char to_find2[] = "456";

	printf("\n\n-----\nstr = %s\nto_find = %s\n", str2, to_find2);
	printf("%s\n", strstr(str2, to_find2));


	return (0);
}
