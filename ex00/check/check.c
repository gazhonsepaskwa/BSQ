/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:54:07 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 08:55:36 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check(char *buffer)
{
	int buff_len;
	buff_len = strlen(buffer);
	if (chk_line_len(buffer) && chk_f_line(buffer) && chk_nl(buffer, buff_len))
	{
		if (chk_allowed_char(buffer) && chk_map_line_count(buffer))
			return (1);
		return (0);
	}
	else
		return (0);
}