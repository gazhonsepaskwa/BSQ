/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:21:52 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 16:11:41 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check(char *buffer)
{
	int	buff_len;

	buff_len = ft_strlen(buffer);
	if (buff_len == 0)
	{
		ft_putstrerror("map error\n");
		return (0);
	}
	if (chk_f_line(buffer) && chk_line_len(buffer) && chk_nl(buffer, buff_len))
	{
		if (chk_allowed_char(buffer) && chk_map_line_count(buffer))
			return (1);
		ft_putstrerror("map error\n");
		return (0);
	}
	else
	{
		ft_putstrerror("map error\n");
		return (0);
	}
}
