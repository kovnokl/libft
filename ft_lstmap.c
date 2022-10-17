/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:53:04 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 00:14:59 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_map;
	t_list	*prev_head;

	new_map = ft_lstnew(f(lst->content));
	prev_head = new_map;
	if (!new_map)
		return (0);
	while (lst)
	{
		ft_lstadd_back(&new_map, f(lst->content));
		lst = lst->next;
		if (!prev_head->next)
		{
			ft_lstclear(&new_map, del);
			return (0);
		}
		prev_head = lst;
	}
	return (lst);
}
