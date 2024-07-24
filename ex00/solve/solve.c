/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:59:05 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:59:20 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	solve_bsq(char *buffer)
{
	char	**grid;
	int		**intgrid;	grid = set_grid(buffer);
	grid = fill_grid(grid, buffer);
	intgrid = set_intgrid(buffer);
	grid_binary(grid, buffer, intgrid);
	create_bsq(intgrid);
	fill_square(grid, buffer, intgrid);
	print_grid(grid);
	free_all(grid, buffer);
}