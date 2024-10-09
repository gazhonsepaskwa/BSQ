/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_map_line_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:24:09 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 10:24:18 by lderidde         ###   ########.fr       */
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
	return (line_count(buffer) - 1 == num_lines(buffer));
}
