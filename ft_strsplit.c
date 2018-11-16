/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:20:50 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/14 06:25:56 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsb(char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str)
		{
			while (*str != c && *str)
				str++;
			i++;
		}
	}
	return (i);
}

static int	ft_lenc(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
			j++;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	if (!s || !c)
		return (NULL);
	i = 0;
	k = 0;
	if (!(tab = (char **)malloc(sizeof(*tab) * (ft_wordsb((char *)s, c) + 1))))
		return (NULL);
	while (i < ft_wordsb((char *)s, c))
	{
		j = 0;
		if (!(tab[i] = (char *)malloc(sizeof(*tab) *
				(ft_lenc((char *)&s[i], c) + 1))))
			return (NULL);
		while (s[k] == c && s[k])
			k++;
		while (s[k] != c && s[k])
			tab[i][j++] = s[k++];
		tab[i++][j] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
