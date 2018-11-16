/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:35:12 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/14 06:11:33 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (!s)
		return (NULL);
	if (!(str = (char *)ft_memalloc(len + 1)))
		return (NULL);
	i = -1;
	while (++i < len)
		str[i] = s[start + i];
	return (str);
}
