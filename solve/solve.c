/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:20:31 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 17:18:50 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	solve_bsq(char *buffer, int argc, int i)
{
	char	**grid;
	int		**intgrid;

	grid = set_grid(buffer);
	grid = fill_grid(grid, buffer);
	intgrid = set_intgrid(buffer);
	grid_binary(grid, buffer, intgrid);
	create_bsq(intgrid);
	fill_square(grid, buffer, intgrid);
	print_grid(grid);
	free_all(grid, buffer, intgrid);
	if (i < argc - 1)
		ft_putchar('\n');
}
