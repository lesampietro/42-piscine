/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:26:23 by lsampiet          #+#    #+#             */
/*   Updated: 2023/09/05 17:39:44 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_isspace(char c)
{
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z')
		&& !(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		space;

	i = 0;
	space = 1;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			space = 1;
		}
		else
		{
			if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i] - ('a' - 'A'));
			if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = (str[i] + ('a' - 'A'));
			space = 0;
		}
		i++;
	}
	return (str);
}
