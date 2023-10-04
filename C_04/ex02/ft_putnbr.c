/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:58:51 by lsampiet          #+#    #+#             */
/*   Updated: 2023/09/07 21:59:28 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_count_digits(int nb)
{
	int	digits;

	digits = 0;
	while (nb != 0)
	{
		nb = nb / 10;
			digits++;
	}
	return (digits);
}

void	ft_putnbr(int nb)
{
	int	sign;
	int	digits;

	sign = 1;
	digits = ft_count_digits(nb);
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
		sign *= -1;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
