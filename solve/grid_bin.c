/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_bin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:17:35 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 13:00:27 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	grid_binary(char **grid, char *buffer, int **intgrid)
{
	char	vide;
	char	obst;
	int		i;
	int		j;

	j = 0;
	while (buffer[j] != '\n')
		j++;
	vide = buffer[j - 3];
	obst = buffer[j - 2];
	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if (grid[i][j] == vide)
				intgrid[i][j] = 1;
			if (grid[i][j] == obst)
				intgrid[i][j] = 0;
			j++;
		}
		i++;
	}
}
