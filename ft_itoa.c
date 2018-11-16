/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 06:56:37 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/14 07:08:20 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strinv(char *str)
{
	char	c;
	int		i;
	int		len;

	if (*str == '-')
		str++;
	len = ft_strlen(str);
	i = -1;
	while (++i < len)
	{
		c = str[i];
		str[i] = str[len - 1];
		str[len - 1] = c;
		len--;
	}
}

static int	ft_size(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_itoarev(int n, char *str)
{
	if (n < 0)
	{
		*str = '-';
		str++;
		n = -n;
	}
	if (n > 9)
	{
		ft_itoarev(n / 10, str + 1);
		*str = n % 10 + 48;
	}
	else
	{
		*str = n + 48;
		str[1] = '\0';
	}
}

char		*ft_itoa(int n)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * (ft_size(n) + 1))))
		return (NULL);
	if (n == -2147483648)
		ft_strcpy(str, "-2147483648");
	else
	{
		ft_itoarev(n, str);
		ft_strinv(str);
	}
	return (str);
}
