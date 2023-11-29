/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:50:29 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/29 20:52:34 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main(void)
{
	const char	*str = "line\r0\1770\012li\bne\t01";

	write(1, "0:	", 3);
	ft_writing(str, 0);
	write(1, "\n-1:	", 5);
	ft_writing(str, -1);
	write(1, "\n25:	", 5);
	ft_writing(str, 35);
	return (0);
}
