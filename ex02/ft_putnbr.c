/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:54:17 by yemoreno          #+#    #+#             */
/*   Updated: 2023/07/25 20:47:41 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_get_number(int nb, int positive);

void	ft_putnbr(int nb)
{
	char	nbl;
	char	simbol;
	int		positive;

	positive = 0;
	simbol = 45;
	nbl = 48;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
			positive = -nb;
		if (nb > 9)
			ft_putnbr(nb / 10);
		nbl += ft_get_number(nb, positive);
		if (positive != 0)
		{
			write(1, &simbol, 1);
			if (positive > 9)
				ft_putnbr(positive / 10);
		}
		write (1, &nbl, 1);
	}
}

int	ft_get_number(int nb, int positive)
{
	if (positive != 0)
		return (positive % 10);
	else
		return (nb % 10);
}
