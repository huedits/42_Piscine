/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:48:56 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/13 11:10:19 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_values(int a);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_values(x);
			write(1, " ", 1);
			ft_print_values(y);
			if (x < 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

void	ft_print_values(int a)
{
	char	c;

	c = ((a / 10) + '0');
	write(1, &c, 1);
	c = ((a % 10) + '0');
	write(1, &c, 1);
}
