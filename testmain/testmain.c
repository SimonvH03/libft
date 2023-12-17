/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:50:29 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/17 16:44:39 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"



int	main(void)
{
	const char	*str1 = "txt\001\002\003\004\005\006txt\a\b\t\n\v\f\r\177txt";
	const char	*str2 = "t\016\017\020\021\022\023\024t\025\026\027\030\31xt";
	char		empty[1000];
	char		*tmp;

	ft_bzero(empty, 1000);
	tmp = ft_writingpoint(str1, 60);
	ft_putchar('\n');
	ft_putstr(tmp);
	ft_putchar('\n');
	ft_putchar('\n');
	free (tmp);
	return (0);
}
