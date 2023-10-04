/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:33:42 by lsampiet          #+#    #+#             */
/*   Updated: 2023/09/07 15:59:41 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i02;

	i = 0;
	i02 = 0;
	while (str[i] != to_find[i02] && str[i] != '\0')
	{
		if (str[i] == to_find[i02])
		{
			while (to_find[i02] != '\0')
			{
				str[i] = to_find[i02];
				i++;
				i02++;
			}
			if (to_find[i02] != str[i])
				i02 = 0;
		}
		i++;
	}
	return (&str[i]);
}
