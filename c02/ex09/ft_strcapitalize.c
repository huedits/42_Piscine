/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:18:31 by vimatheu          #+#    #+#             */
/*   Updated: 2022/07/17 10:26:51 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_alpha(char c);
void	strlow(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	strlow(str);
	i = 0;
	while (str[i])
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (check_alpha(str[i]) == 1)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

int	check_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

void	strlow(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
}
