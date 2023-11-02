/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:31:07 by simon             #+#    #+#             */
/*   Updated: 2023/11/02 15:31:12 by simon            ###   ########.fr       */
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
		lst = lst->next;
		ft_lstadd_back(&first, newnode);//Optimize
	}
	return (first);
}
