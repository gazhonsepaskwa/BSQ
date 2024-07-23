/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_f_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:54:49 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/23 18:58:35 by nalebrun         ###   ########.fr       */
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
	int len;
	int i;

	len = get_first_line_len(buffer);
	if (len < 4)
		return (0);
	i = -1;
	while (++i <= (len - 4))
		if (!(is_num(buffer[i])))
			return (0);
	return (1);
}