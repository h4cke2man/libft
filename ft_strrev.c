/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:06:20 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/14 07:05:47 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	int		i;
	int		len;
	char	a;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		a = str[i];
		str[i] = str[len - 1];
		str[len - 1] = a;
		len--;
		i++;
	}
}
