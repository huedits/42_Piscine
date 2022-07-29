#include<stdio.h>
#include<stdlib.h>

int	ft_sqrt(int nb);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("sqrt %d = %d\n", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
}
