/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:21:57 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/26 22:14:05 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnewdel(void *c, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*newcontent;

	newcontent = f(c);
	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
	{
		del(newcontent);
		return (NULL);
	}
	new->content = (void *)newcontent;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*newnode;

	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	first = (t_list *)malloc(sizeof(t_list));
	if (first == NULL)
		return (NULL);
	newnode = ft_lstnewdel(lst->content, f, del);
	if (newnode == NULL)
		return (NULL);
}
