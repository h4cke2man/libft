/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:53:52 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/09 15:15:59 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*ss;

	cc = (unsigned char)c;
	ss = (unsigned char *)s;
	i = -1;
	while (++i < n)
	{
		if (ss[i] == cc)
			return (&ss[i]);
	}
	return (NULL);
}
