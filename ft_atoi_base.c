/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 12:41:09 by exam              #+#    #+#             */
/*   Updated: 2018/11/14 06:31:37 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power(int nb, int pow)
{
	int i;
	int a;

	a = nb;
	if (pow == 0)
		return (1);
	i = 0;
	while (++i < pow)
		a = nb * a;
	return (a);
}

static int	isgood(char c, int n)
{
	if (n <= 10 && c >= 48 && c <= n - 1 + 48 && c != '\0')
		return (1);
	else if (n > 10 && c != '\0' && ((c >= 48 && c <= 57) ||
		(c >= 97 && c <= n - 1 + 97 - 10) ||
		(c >= 65 && c <= n - 1 + 65 - 10)))
		return (1);
	return (0);
}

static int	tmp(int str_base, char c)
{
	int tmp;

	if (str_base > 10 && c >= 97)
		tmp = c - 97 + 10;
	else if (str_base > 10 && c >= 65)
		tmp = c - 65 + 10;
	else
		tmp = c - 48;
	return (tmp);
}

int			ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		j;
	int		nb;
	int		a;

	i = -1;
	a = 0;
	nb = 1;
	while (str[i] < 33 || str[i] > 126)
		i++;
	if (str[i] == 45)
		nb = -1 * nb;
	if (str[i] == 43 || str[i] == 45)
		i++;
	j = i;
	while (isgood(str[j], str_base))
		j++;
	while (i < j)
	{
		a = tmp(str_base, str[i]) * power(str_base, j - i - 1) + a;
		i++;
	}
	return (a * nb);
}
