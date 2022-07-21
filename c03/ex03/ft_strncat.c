/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:37:33 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/19 19:35:43 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (dest[i])
		i++;
	while (c < nb && src[c])
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
