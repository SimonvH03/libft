/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:50:29 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/04 16:30:09 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	const char	*str = "line0\nline1\nline2\nline3";

	write(1, "0:	", 3);
	ft_writing(str, 0);
	write(1, "\n-1:	", 5);
	ft_writing(str, -1);
	write(1, "\n\033[31m50:	", 10);
	ft_writing(str, 50);
	write(1, "\n", 1);
	return (0);
}