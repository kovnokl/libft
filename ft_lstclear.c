/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:46:10 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 00:14:33 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstscndlast(t_list *lst);

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*second_last;

	second_last = ft_lstscndlast(*lst);
	while (second_last)
	{
		ft_lstdelone(second_last->next, del);
		free(second_last->next);
		second_last->next = 0;
		second_last = ft_lstscndlast(*lst);
	}
	ft_lstdelone(*lst, del);
	free(*lst);
	lst = 0;
}

t_list	*ft_lstscndlast(t_list *lst)
{
	t_list	*second_last;

	second_last = 0;
	if (lst->next)
		second_last = lst;
	while (second_last->next->next)
		second_last = second_last->next;
	return (second_last);
}
