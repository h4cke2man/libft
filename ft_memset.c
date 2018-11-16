/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:48:06 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/08 18:10:19 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		i;
	unsigned char		cc;
	unsigned char		*bb;

	cc = c;
	bb = (unsigned char *)b;
	i = -1;
	while (++i < len)
		bb[i] = c;
	return (b);
}
