/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:24:28 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/09 11:48:30 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned	char	*src2;
	unsigned	char	*dst2;
	unsigned	char	cc;

	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	cc = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == cc)
			return (&dst[i + 1]);
	}
	return (NULL);
}
