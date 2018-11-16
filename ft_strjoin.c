/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:33:30 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/12 18:51:57 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*start;

	if (!s1 | !s2)
		return (NULL);
	if (!(str = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	start = str;
	while (*s1)
		*(str++) = *(s1++);
	while (*s2)
		*(str++) = *(s2++);
	return (start);
}
