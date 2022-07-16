/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:47:53 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/14 22:18:38 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

int	check(int *ptr, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (ptr[i] > ptr[i + 1])
			return (i);
		i++;
	}
	return (size + 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	c;

	c = check(tab, size);
	while (c != (size + 1))
	{
		aux = tab[c];
		tab[c] = tab[c + 1];
		tab[c + 1] = aux;
		c = check(tab, size);
	}
}
