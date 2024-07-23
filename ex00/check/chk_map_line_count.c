/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_map_line_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:55:17 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/23 18:58:50 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	line_count(char *buffer)
{
	int	i;
	int	line_num;

	i = 0;
	line_num = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			line_num++;
		i++;
	}
	return (line_num);
}

int	chk_map_line_count(char *buffer)
{
	return (line_count(buffer) - 1 == buffer[0] - '0');
}