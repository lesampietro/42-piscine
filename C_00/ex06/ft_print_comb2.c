/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:11:11 by lsampiet          #+#    #+#             */
/*   Updated: 2023/08/23 20:58:00 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_int(int number)
{
	char	units;
	char	decs;

	units = (number % 10) + '0';
	decs = (number / 10) + '0';
	write (1, &decs, 1);
	write (1, &units, 1);
}

void	ft_print_comb()
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_int(n1);
			write (1, " ", 1);
			ft_print_int(n2);
			if (n1 == 98 && n2 == 99)
			{
				return ;
			}
			write (1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
		
int	main(void)
{
	ft_print_comb();
}
