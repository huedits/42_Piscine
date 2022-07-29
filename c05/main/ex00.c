#include<stdio.h>
#include<stdlib.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("%d! = %d\n", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
}
