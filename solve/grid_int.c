/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:19:25 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 18:24:55 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**set_intgrid(char *buffer)
{
	int	**intgrid;
	int	len;
	int	i;
	int	j;

	j = num_lines(buffer);
	i = 0;
	len = get_len_lines(buffer);
	intgrid = malloc(sizeof(int *) * (j + 1));
	if (!intgrid)
		return (NULL);
	intgrid[j] = NULL;
	while (i < j)
	{
		intgrid[i] = malloc(sizeof(int) * (len + 1));
		if (!intgrid[i])
			return (NULL);
		intgrid[i][len] = -1;
		i++;
	}
	return (intgrid);
}
