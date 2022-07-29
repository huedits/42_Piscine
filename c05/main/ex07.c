#include<stdio.h>
#include<stdlib.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("O primo seguinte a %d é %d\n", atoi(argv[1]), ft_find_next_prime(atoi(argv[1])));
}
