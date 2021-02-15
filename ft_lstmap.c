/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 10:17:55 by wphylici          #+#    #+#             */
/*   Updated: 2020/05/25 05:05:12 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (tmp == NULL)
		return (NULL);
	new = tmp;
	while (lst != NULL)
	{
		if (lst->next != NULL)
		{
			tmp->next = ft_lstnew(f(lst->next->content));
			if (tmp == NULL)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	tmp->next = NULL;
	return (new);
}
