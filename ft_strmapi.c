/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:20:15 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/12 18:35:49 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	size_t		i;

	if (!s)
		return (NULL);
	if (!(str = (char *)ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s))
		str[i] = f((unsigned int)i, s[i]);
	str[i] = '\0';
	return (str);
}
