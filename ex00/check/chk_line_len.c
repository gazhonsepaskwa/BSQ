/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_line_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:55:03 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:12:22 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	chk_line_len(char *buffer)
{
	int i = 0;
	int count = 0;
	int line_len = get_map_line_len(buffer);

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