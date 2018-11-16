/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:05:05 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/12 18:36:41 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*str;
	size_t		i;

	if (!s)
		return (NULL);
	if (!(str = (char *)ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s))
		str[i] = f(s[i]);
	str[i] = '\0';
	return (str);
}
