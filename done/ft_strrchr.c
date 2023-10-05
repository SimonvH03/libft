/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:51:27 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/05 19:58:54 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c)
{
	int		i;

	i = ft_strlen(str) - 1;
	if (!c)
		return (&str[i + 1]);
	while (i && str[i] && str[i] != c)
		i--;
	if (str[i] == c)
		return (&str[i]);
	return ((void *)0);
}
