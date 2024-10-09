/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_line_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:23:32 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 15:20:44 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	chk_line_len(char *buffer)
{
	int	i;
	int	count;
	int	line_len;

	i = 0;
	count = 0;
	line_len = get_len_lines(buffer);
	if (line_len == 0)
		return (0);
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	i++;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			if (count != line_len)
				return (0);
			count = 0;
		}
		else
			count++;
		i++;
	}
	return (1);
}
