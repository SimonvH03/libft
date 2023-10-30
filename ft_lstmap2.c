/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:21:57 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/30 16:29:44 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**nlst;
	t_list	*node;

	if (lst == NULL || f == NULL || del == NULL)
		return ;
	*nlst = lst;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclearn(nlst);
			return (NULL);
		}
		ft_lstadd_back(nlst, node);
		lst = lst->next;
	}
}
