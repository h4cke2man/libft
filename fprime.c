/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 06:41:54 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/14 06:42:41 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fprime(char *str)
{
	int		nb;
	int		div;

	nb = ft_atoi(str);
	div = 2;
	if (nb == 1)
		ft_putchar('1');
	if (nb < 1)
		return ;
	while (div <= nb)
	{
		if (nb % div == 0)
		{
			ft_putnbr(div);
			if (nb == div)
				return ;
			ft_putchar('*');
			nb = nb / div;
			div = 1;
		}
		div++;
	}
}
