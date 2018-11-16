/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 21:58:39 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/12 18:18:20 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*dst2;
	char	*src2;

	src2 = (char *)src;
	dst2 = (char *)dst;
	if (src2 > dst2)
	{
		i = -1;
		while (++i < (int)len)
			dst2[i] = src2[i];
	}
	else if (src2 < dst2)
	{
		i = len - 1;
		while (i >= 0)
		{
			dst2[i] = src2[i];
			i--;
		}
	}
	return (dst);
}
