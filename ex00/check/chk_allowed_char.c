/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_allowed_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:54:38 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/23 18:58:14 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*get_allowed_char(char *buffer)
{
	int		i;
	char	*out;

	i = 0;
	out = malloc(4);
	i = 0;
	while (buffer[i] != '\n')
		i++;
	out[0] = buffer[i - 3];
	out[1] = buffer[i - 2];
	out[2] = buffer[i - 1];
	out[3] = '\0';
	return (out);
}

int	chk_allowed_char(char *bfr)
{
	char *alwd;
	int i;

	i = -1;
	alwd = get_allowed_char(bfr);
	while (!(is_printable(alwd[++i])))
		return (0);
	i = 0;
	if (alwd[0] == alwd[1] || alwd[0] == alwd[2] || alwd[1] == alwd[2])
		return (0);
	while (bfr[i] != '\n' && bfr[i] != '\0')
		i++;
	while (bfr[++i])
	{
		if (bfr[i] != alwd[0] && bfr[i] != alwd[1] && bfr[i] != '\n')
			return (0);
	}
	return (1);
}