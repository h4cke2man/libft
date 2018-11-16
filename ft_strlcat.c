/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:18:35 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/12 23:43:16 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	temp;

	temp = size + ft_strlen(src);
	if (size > ft_strlen(dst))
	{
		temp = ft_strlen(src) + ft_strlen(dst);
		ft_strncat(dst, (char *)src, size - ft_strlen(dst) - 1);
	}
	return (temp);
}
