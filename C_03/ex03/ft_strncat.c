/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:20:07 by lsampiet          #+#    #+#             */
/*   Updated: 2023/09/07 15:56:03 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
