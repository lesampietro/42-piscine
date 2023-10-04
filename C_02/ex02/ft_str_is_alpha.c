/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:57:54 by lsampiet          #+#    #+#             */
/*   Updated: 2023/09/06 02:04:04 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	if (!*str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (!(str[i] >= 'A') && (str[i] <= 'Z'))
			{
				return (0);
			}
		}	
		i++;
	}
	return (1);
}
