/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:34:21 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/08 12:26:30 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned long	i;
	char			*str;

	str = (char *)s;
	i = 0;
	while (i < ft_strlen(str) + 1)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
