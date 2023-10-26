/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:19:24 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/23 20:02:16 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i + 1) < n && (unsigned char)a[i] == (unsigned char)b[i] && a[i])
		i++;
	return ((unsigned char)a[i] - (unsigned char)b[i]);
}
