/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:15:07 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 14:10:07 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_all(char **grid, char *buffer, int **intgrid)
{
	int	i;

	i = 0;
	while (grid[i])
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	free(buffer);
	i = 0;
	while (intgrid[i])
	{
		free(intgrid[i]);
		i++;
	}
	free(intgrid);
}
