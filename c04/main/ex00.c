#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Victor";
	char *p_str;

	p_str = str;

	int count = ft_strlen(p_str);
	
	printf("%d\n", count);

	count = strlen(p_str);

	printf("\n\n%d\n", count);
}
