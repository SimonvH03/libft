/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:38:08 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/19 21:44:01 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countcwords(const char *str, char c)
{
	int	i;
	int	inword;
	int	count;

	i = 0;
	inword = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			inword = 1;
		}
		if (inword == 1 && str[i] == c)
		{
			inword = 0;
			count++;
		}
		i++;
	}
	return (count);
}


// static ft_strccpy()

char	**ft_split(const char *s, char c)
{
	int		i;
	int		splitcount;
	char	**array;
	int		jump;

	splitcount = ft_countcwords(s, c);
	array = (char **)malloc((splitcount + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (splitcount)
	{

	}
	i = 0;
	jump = 0;
	splitcount = 0;
	while (s[i + jump])
	{
		i = 0;
		if (s[i + jump] == c && s[i + 1] != c)
		{
			array[splitcount][i] = '\0';
			splitcount++;
			jump = jump + i;
		}
		array[splitcount][i] = s[i + jump];
		i++;
	}
	return (array);
}
