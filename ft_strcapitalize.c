/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:37:24 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/14 06:22:25 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}

char			*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == 32 || str[i - 1] == 43 || str[i - 1] == 45) &&
				(str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
