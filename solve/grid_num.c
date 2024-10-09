/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:19:51 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 15:58:26 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**set_grid(char *buffer)
{
	char	**grid;
	int		len;
	int		i;
	int		j;

	j = num_lines(buffer);
	i = 0;
	len = get_len_lines(buffer);
	grid = malloc(sizeof(char *) * (j + 1));
	if (!grid)
		return (NULL);
	grid[j] = 0;
	while (i < j)
	{
		grid[i] = malloc(sizeof(char) * (len + 1));
		if (!grid[i])
			return (NULL);
		grid[i][len] = 0;
		i++;
	}
	return (grid);
}

char	**fill_grid(char **grid, char *buffer)
{
	int	i;
	int	j;
	int	tmp;
	int	col;
	int	row;

	tmp = 0;
	row = num_lines(buffer);
	col = get_len_lines(buffer);
	while (buffer[tmp] != '\n')
		tmp++;
	tmp++;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			grid[i][j] = buffer[tmp + j];
			j++;
		}
		tmp += j + 1;
		i++;
	}
	return (grid);
}

void	print_grid(char **grid)
{
	int	i;

	i = 0;
	while (grid[i])
	{
		ft_putstr(grid[i]);
		ft_putchar('\n');
		i++;
	}
}
