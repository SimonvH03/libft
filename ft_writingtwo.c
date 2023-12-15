/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writingtwo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:46:08 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/16 00:24:19 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MARKUP "\033[35m\\"
#define ULEN 7
#define MARKDOWN "\033[0m"
#define DLEN 5
#define WRITELEN 15
#define BACKPRINT "\a\b\t\n\v\f\r\177"

static int	ft_npcount(const char *str, int n)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < n)
	{
		if (!ft_isprint(str[i]))
			count += WRITELEN;
		else
			count += 1;
	}
	return (count);
}

static int	ft_char_octal(char *outstr, const int c)
{
	char	out[WRITELEN + 1];
	char	octal[4];

	ft_cpy(out, MARKUP, ULEN);
	octal[0] = ((c >> 6) & 7) + '0';
	octal[1] = ((c >> 3) & 7) + '0';
	octal[2] = ((c >> 0) & 7) + '0';
	ft_cpy(out + ULEN, octal, 3);
	ft_cpy(out + WRITELEN - DLEN, MARKDOWN, DLEN);
	ft_cpy(outstr, out, WRITELEN);
	return (1);
}

static int	ft_char_back(char *outstr, const int c)
{
	char		out[WRITELEN + 1];
	char		back[4];
	const char	*except = "abtnvfrD0";
	int			i;

	ft_bzero(back, 4);
	ft_cpy(out, MARKUP, ULEN);
	if (c == '\177')
		ft_cpy(out + ULEN, "DEL", 3);
	else if (c == '\0')
	{
		out[ULEN - 4] = '1';
		back[0] = '0';
	}
	else
	{
		i = 0;
		while (BACKPRINT[i])
			if (c == BACKPRINT[i++])
				back[0] = except[i - 1];
	}
	ft_cpy(out + ULEN, back, 3);
	ft_cpy(out + WRITELEN - DLEN, MARKDOWN, DLEN);
	ft_cpy(outstr, out, WRITELEN);
	return (1);
}

int	ft_makeoutstr_writing(char *outstr, const char *str, int n)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < n)
	{
		if (i == n)
			ft_cpy(outstr, "\033[2m", 4);
		if (ft_strchr(BACKPRINT, str[i]))
			len += ft_char_octal(outstr, str[i]);
		else if (!ft_isprint(str[i]))
			len += ft_char_back(outstr, str[i]);
		else
			len += ft_cpy(outstr, &str[i], 1);
		i++;
	}
	ft_cpy(outstr, MARKDOWN, DLEN);
	return (len);
}

int	ft_writingtwo(const char *str, int n)
{
	char		*outstr;
	const int	strlen = ft_strlen(str);

	if (n == 0)
		n = strlen;
	if (n == -1)
		n = strlen + 1;
	outstr = (char *)malloc(ft_npcount(str, n) + 8 + 1);
	if (outstr == NULL)
		return (NULL);
	return (n);
}
