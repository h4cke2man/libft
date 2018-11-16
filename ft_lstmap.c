/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:40:31 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/11 22:34:16 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstaddend(t_list **alst, t_list *new)
{
	if (!(*alst))
		ft_lstadd(alst, new);
	else
	{
		while ((*alst)->next)
		{
			alst = &(*alst)->next;
		}
		(*alst)->next = new;
		new->next = NULL;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lst2;

	if (!(lst2 = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	lst2 = NULL;
	while (lst)
	{
		ft_lstaddend(&lst2, f(lst));
		lst = lst->next;
	}
	return (lst2);
}
