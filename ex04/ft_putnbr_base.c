/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:28:25 by yemoreno          #+#    #+#             */
/*   Updated: 2023/07/24 19:57:04 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_check_base(char *base);
void	ft_transform_base(int nbr, char *base);
int		ft_strlen(char *str);
int		ft_get_number(int nbr, int positive);

void	ft_putnbr_base(int nbr, char *base)
{
	char	nbl;
	char	simbol;
	int		positive;
	int		base_len;

	positive = 0;
	simbol = 45;
	nbl = 48;
	if (ft_check_base(base))
	{
		base_len = ft_strlen(base);
		if (nbr < 0)
			positive = -nbr;
		if (nbr > ft_strlen(base))
			ft_putnbr_base(nbr / base_len, base);
		nbl += ft_get_number(nbr, positive);
		if (positive != 0)
		{
			write(1, &simbol, 1);
			ft_putnbr_base((positive / base_len), base);
		}
		write (1, &nbl, 1);
	}
}

int	ft_get_number(int nbr, int positive)
{
	if (positive != 0)
		return (positive % 10);
	else
		return (nbr % 10);
}

int	ft_check_base(char *base)
{
	long	i;
	long	j;

	i = 0;
	j = 0;
	if (base == NULL)
		return (0);
	else
	{
		while (i < ft_strlen(base))
		{
			while (j < ft_strlen(base))
			{
				if (base[j + 1] == base[i])
					return (0);
				if (base[j] == '-' || base[j] == '+')
					return (0);
				j++;
			}
			i++;
			j = i;
		}
	}
	return (1);
}

void	ft_transform_base(int nbr, char *base)
{
	write (1, &base[nbr - 1], 1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}
