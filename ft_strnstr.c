/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:49:34 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/10 15:02:46 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*start;

	start = (char *)haystack;
	if (len == 0)
		return (0);
	if (!(ft_strcmp(needle, "")))
		return ((char *)haystack);
	while (*haystack && start + (long)len - haystack >= (long)ft_strlen(needle))
	{
		if (!(ft_strncmp(haystack, needle, ft_strlen(needle))))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
