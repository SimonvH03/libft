/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writingpoint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:57:06 by simon             #+#    #+#             */
/*   Updated: 2023/12/17 17:01:35 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MARKSPEC "\033[35m"
#define MAKEZERO "\033[31m\\0"
#define MARKOUT "\033[2m"
#define MARKDOWN "\033[0m"
#define WRITELEN 13

static int	ft_nonpcount(const char *str, int n)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < n)
	{
		if (ft_strchr("\a\b\t\n\v\f\r", str[i]))
			count += WRITELEN - 2;
		else if (!ft_isprint(str[i]))
			count += WRITELEN;
		else
			count += 1;
		i++;
	}
	return (count);
}

static int	ft_convert_octal(char *dest, const int c)
{
	char	octal[4];

	while (*dest)
		dest++;
	ft_strcat(dest, MARKSPEC);
	if (c == '\177')
		ft_cpy(octal, "DEL", 3);
	else
	{
		octal[0] = ((c >> 6) & 7) + '0';
		octal[1] = ((c >> 3) & 7) + '0';
		octal[2] = ((c >> 0) & 7) + '0';
	}
	ft_strcat(dest, octal);
	ft_strcat(dest, MARKDOWN);
	return (1);
}

static int	ft_convert_backprint(char *dest, const int c)
{
	const char	*rep = "abtnvfr";
	char		back[2];

	ft_bzero(back, 2);
	ft_strcat(dest, MARKSPEC);
	back[0] = rep[c - 7];
	ft_strcat(dest, back);
	ft_strcat(dest, MARKDOWN);
	return (1);
}

static int	ft_construct_writing(char *out, const char *str, int n)
{
	char	tmp[2];
	int		spec;
	int		i;

	ft_bzero(tmp, 2);
	i = 0;
	while (n-- > 0)
	{
		tmp[0] = *str;
		if (i == n)
			ft_strcat(out, MARKOUT);
		i += ft_cat_backprint(out, str);
		i += ft_cat_octal(out, str);
		i += ft_strcat(out, tmp);
	}
	ft_strcat(out, MARKDOWN);
	ft_strcat(out, "\0");
	return (1);
}

char	*ft_writingpoint(const char *str, int n)
{
	char		*outstr;
	const int	strlen = ft_strlen(str);
	int			size;

	if (n == 0)
		n = strlen;
	else if (n == -1)
		n = strlen + 1;
	size = ft_nonpcount(str, n) + ft_strlen(MARKDOWN);
	if (n > strlen + 1)
		size += ft_strlen (MARKOUT);
	outstr = (char *)malloc(size + 1);
	if (outstr == NULL)
		return (NULL);
	ft_bzero(outstr, size); // outstr[size] = '\0';
	ft_construct_writing(outstr, str, n);
	return (outstr);
}
