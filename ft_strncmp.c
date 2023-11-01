/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:19:24 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/01 22:15:42 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t			i;
	unsigned char	*uca;
	unsigned char	*ucb;

	i = 0;
	uca = (const unsigned char *)a;
	ucb = (const unsigned char *)b;
	if (n == 0)
		return (0);
	while ((i + 1) < n && uca[i] == ucb[i] && a[i])
		i++;
	return (uca[i] - ucb[i]);
}
