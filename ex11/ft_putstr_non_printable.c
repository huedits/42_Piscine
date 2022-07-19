/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:09:26 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/19 10:16:54 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Este exercício está errado, não consegui descobrir como arrumar */

#include<unistd.h>

void	ft_print_hex(int d);
void	ft_putchar(char c);
void	ft_putstr_non_printable(char *str);

void	ft_print_hex(int d)
{
	char	c;

	if (d <= 9)
	{
		c = d + '0';
		ft_putchar(c);
	}
	else
	{
		c = (d % 10) + 'a';
		ft_putchar(c);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_print_hex(*str / 16);
			ft_print_hex(*str % 16);
		}
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
