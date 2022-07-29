#include<stdio.h>
#include<stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("Index %d = %d\n", atoi(argv[1]), ft_fibonacci(atoi(argv[1])));
}
