/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:32:50 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/27 17:11:31 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	r;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
	{
		r = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (r);
	}
}
