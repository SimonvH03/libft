/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:21:57 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/30 16:48:30 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*newnode;
	void	*tmpcont;

	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	first = NULL;
	while (lst)
	{
		tmpcont = f(lst->content);
		newnode = ft_lstnew(tmpcont);
		if (newnode == NULL)
		{
			del(tmpcont);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, newnode);
		lst = lst->next;
	}
	return (first);
}
