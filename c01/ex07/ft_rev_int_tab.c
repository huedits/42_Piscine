/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:18:35 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/14 22:53:42 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	lim;

	lim = (size / 2) - 1;
	size--;
	i = 0;
	while (i <= lim)
	{
		aux = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = aux;
		i++;
	}
}
