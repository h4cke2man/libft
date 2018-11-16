/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:34:42 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/13 23:38:47 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	a;
	int nb;
	int i;

	i = 0;
	a = 0;
	nb = 1;
	if (!(ft_strcmp(str, "")))
		return (0);
	while (str[i] > 0 && str[i] < 33 && str[i] != 27)
		i++;
	if (str[i] == '-')
		nb = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		i++;
	}
	return (a * nb);
}
