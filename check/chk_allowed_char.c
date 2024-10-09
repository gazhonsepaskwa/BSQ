/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_allowed_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:22:32 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 14:58:19 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*get_allowed_char(char *buffer)
{
	int		i;
	char	*out;

	i = 0;
	out = malloc(4);
	if (!out)
		return ((void *)0);
	i = 0;
	while (buffer[i] != '\n')
		i++;
	out[0] = buffer[i - 3];
	out[1] = buffer[i - 2];
	out[2] = buffer[i - 1];
	out[3] = '\0';
	i = -1;
	while (!(is_printable(out[++i])))
	{
		free(out);
		return (NULL);
	}
	return (out);
}

int	chk_allowed_char(char *bfr)
{
	char	*alwd;
	int		i;

	i = -1;
	alwd = get_allowed_char(bfr);
	if (!alwd)
		return (0);
	i = 0;
	if (alwd[0] == alwd[1] || alwd[0] == alwd[2] || alwd[1] == alwd[2])
	{
		free(alwd);
		return (0);
	}
	while (bfr[i] != '\n' && bfr[i] != '\0')
		i++;
	while (bfr[++i])
	{
		if (bfr[i] != alwd[0] && bfr[i] != alwd[1] && bfr[i] != '\n')
		{
			free(alwd);
			return (0);
		}
	}
	free(alwd);
	return (1);
}
