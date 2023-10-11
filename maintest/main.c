/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:05:46 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/11 18:33:08 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//singlecharacter
int	main(void)
{
	printf("isalnum:	%d\n", ft_isalnum('b'));
	printf("isalpa:		%d\n", ft_isalpha('b'));
	printf("isascii:	%d\n", ft_isascii('-'));
	printf("isdigit:	%d\n", ft_isdigit('1'));
	printf("isprint:	%d\n", ft_isprint(' '));
	printf("tolower:	%d\n", ft_tolower('B'));
	printf("toupper:	%d\n", ft_toupper('b'));
	return (0);
}

//str-mem inspection
int	main(void)
{
	ft_strchr();
	ft_strlen();
	ft_strncmp();
	ft_strnstr();
	ft_strrchr();
	ft_memchr();
	ft_memcmp();
	
}

//str-mem modification
int	main(void)
{
	ft_strlcat()
}

//	printf("atoi:		%d	[%d]\n", ft_atoi("  -0042x"), atoi("  -0042x"));