/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:05:51 by lsampiet          #+#    #+#             */
/*   Updated: 2023/09/07 16:01:05 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while ((dest[i] != '\0') && i < size)
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	if (i == size || j == size)
	{
		return (i + j);
	}
	while (src[k] != '\0' && (i + k + 1) < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	return (i + j);
}
