/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_f_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:23:01 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 15:43:21 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_first_line_len(char *buffer)
{
	int	line_len;
	int	i;

	line_len = 0;
	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		line_len++;
		i++;
	}
	return (line_len);
}

int	chk_f_line(char *buffer)
{
	int	len;
	int	i;

	i = 0;
	if (!buffer || !buffer[i])
		return (0);
	len = get_first_line_len(buffer);
	if (len < 4)
		return (0);
	while (i <= (len - 4))
	{
		if (!(is_num(buffer[i])))
			return (0);
		i++;
	}
	return (1);
}
