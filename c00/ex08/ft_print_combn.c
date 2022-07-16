/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:16:28 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/14 14:58:03 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);
void	ft_fill_numbers(int len, int pos, int prev, char *str);
void	init(char *str, int len);

int	main(void)
{
	ft_print_combn(4);
}

void	ft_print_combn(int n)
{
	char	str[n];
	char	*p_str;

	p_str = &str[0];
	init(p_str, n);
	if (n > 0 && n <= 9)
	{
		ft_fill_numbers(n, 0, 0, p_str);
	}
	else
		return ;
}

void	ft_fill_numbers(int len, int pos, int start, char *str)
{
	while (start < (10 - (len - pos)))
	{
		*str = start;
		if (pos < len - 1)
		{
			ft_fill_numbers(len, pos++, start++, str++);
		}
		else
		{
			ft_putchar(*str);
		}
	}
}

void	init(char *str, int len)
{
	while (len > 0)
	{
		*str = '0';
		str++;
		len--;
	}
	*str = '\0';
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
