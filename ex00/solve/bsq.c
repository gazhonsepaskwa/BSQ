/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:32:08 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:58:47 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	create_bsq(int **intgrid)
{
	int	i;
	int	j;	i = 0;
	while (intgrid[i])
	{
		j = 0;
		while (intgrid[i][j] != -1)
		{
			if (i == 0 || j == 0)
				j++;
			else if (intgrid[i][j] == 1)
			{
				intgrid[i][j] = min_val(intgrid[i - 1][j],
						intgrid[i - 1][j - 1],
						intgrid[i][j - 1]) + 1;
				j++;
			}
			else
				j++;
		}
		i++;
	}
}

int	*find_bsq(int **intgrid)
{
	int	row;
	int	col;
	int	biggest;
	int	*out;	out = malloc(sizeof(int) * 2);
	biggest = 0;
	row = 0;
	while (intgrid[row])
	{
		col = 0;
		while (intgrid[row][col] != -1)
		{
			if (intgrid[row][col] > biggest)
			{
				biggest = intgrid[row][col];
				out[0] = row;
				out[1] = col;
			}
			col++;
		}
		row++;
	}
	return (out);
}

void	fill_square(char **grid, char *buffer, int **intgrid)
{
	int	*pos;
	int	i;
	int	j;
	int	max;
	int	tmp;	tmp = 0;
	while (buffer[tmp] != '\n')
		tmp++;
	pos = find_bsq(intgrid);
	max = intgrid[pos[0]][pos[1]];
	i = 0;
	while (i < max)
	{
		j = 0;
		while (j < max)
		{
			grid[pos[0] - i][pos[1] - j] = buffer[tmp - 1];
			j++;
		}
		i++;
	}
	free(pos);
}
