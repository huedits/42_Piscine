#include<stdio.h>
#include<stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	if (ft_is_prime(atoi(argv[1])) == 1)
		printf("%d é primo.", atoi(argv[1]));
	else
		printf("%d não é primo.", atoi(argv[1]));
}
