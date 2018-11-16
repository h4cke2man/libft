/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:09:13 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/09 11:24:18 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src2;
	char	*dst2;
	size_t	i;

	src2 = (char *)src;
	dst2 = (char *)dst;
	i = -1;
	while (++i < n)
		dst2[i] = src2[i];
	return (dst);
}
