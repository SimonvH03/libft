/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:38:08 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/19 23:12:58 by simon            ###   ########.fr       */
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
			inword = 1;
		if (inword == 1 && str[i] == c)
		{
			inword = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static int	ft_strclen(const char *str, char c, int k)
{
	int	i;
	int	inword;
	int	splitcount;
	int charcount;

	i = 0;
	inword = 0;
	splitcount = 0;
	charcount = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			inword = 1;
			charcount++;
		}
		if (inword == 1 && str[i] == c)
		{
			inword = 0;
			splitcount++;
		}
		if (splitcount == (k + 1))
			return (charcount);
		i++;
	}
	return (0);
}

static int ft_strccpy(char *arrayline, const char *str, char c, int k)
{
	int	i;
	int	inword;
	int	splitcount;
	int j;

	i = 0;
	inword = 0;
	splitcount = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
			inword = 1;
		if (inword == 1 && str[i] == c)
		{
			inword = 0;
			splitcount++;
		}
		if (splitcount == (k + 1))
		{
			while (str[i + j] != c)
			{
				arrayline[j] = str[i + j];
				j++;
			}
			arrayline[j] = '\0';
			return (1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		splitcount;
	char	**array;

	splitcount = ft_countcwords(s, c);
	array = (char **)malloc((splitcount + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (splitcount > i)
	{
		array[i] = (char *)malloc((ft_strclen(s, c, i) + 1) * sizeof(char));
		if (!array)
			return (NULL);
		i++;
	}
	i = 0;
	while (splitcount > i)
	{
		ft_strccpy(array[i], s, c, i);
		i++;
	}
	return (array);
}

int	main(void)
{
	char **tab = ft_split("  tripouille  42  ", ' ');
	ft_putstr_fd(tab[0], 1);
	return (0);
}
