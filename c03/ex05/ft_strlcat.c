/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:06:49 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/20 18:46:23 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c[2];

	c[0] = ft_strlen(dest);
	c[1] = ft_strlen(src);
	if (size <= c[0])
		return (size + c[1]);
	i = 0;
	j = 0;
	while (src[j] != '\0' && (c[0] + j) < (size - 1))
	{
		dest[c[0] + j] = src[j];
		j++;
	}
	dest[c[0] + j] = '\0';
	return (c[0] + c[1]);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}
