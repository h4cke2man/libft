/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 01:28:17 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/10 01:43:20 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (!(ft_strcmp(needle, "")))
		return ((char *)haystack);
	while (*haystack)
	{
		if (!(ft_strncmp(haystack, needle, ft_strlen(needle))))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
