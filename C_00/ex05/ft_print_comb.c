/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:43:06 by lsampiet          #+#    #+#             */
/*   Updated: 2023/08/23 15:58:21 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c, char d)
{	
	c = ',';
	d = ' ';
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_digits(char n1, char n2, char n3)
{	
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_digits(n1, n2, n3);
				if (n1 == '7' && n2 == '8' && n3 == '9')
					return ;
				ft_putchar(',', ' ');
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
