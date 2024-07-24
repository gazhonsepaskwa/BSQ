/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:28:07 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:28:32 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**set_intgrid(char *buffer)
{
	int	**intgrid;
	int	len;
	int	i;
	int	j;	j = num_lines(buffer);
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

void	print_intgrid(int **grid)
{
	int i;
	int j;

    i = 0;
    while (grid[i])
	{
		j = 0;
		while (grid[i][j] != -1)
		{
			printf("%d", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}
