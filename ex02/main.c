/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:45:28 by fsoares-          #+#    #+#             */
/*   Updated: 2023/07/25 20:48:05 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "ft_putnbr.c"

void	ft_putnbr(int nb);

int main() {
//	for (int i = INT_MIN; i < INT_MAX; ++i)
//	{
//		ft_putnbr(i);
//		printf("\n");
//	}
	ft_putnbr(5);
}