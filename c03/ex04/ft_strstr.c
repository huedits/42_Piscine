/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:39:51 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/20 14:35:51 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
		{
			if (to_find[c + 1] == '\0')
				return (&str[i]);
			c++;
		}
		i++;
	}
	return (0);
}
