/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_bin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:31:40 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:31:43 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	grid_binary(char **grid, char *buffer, int **intgrid)
{
	char	vide;
	char	obst;
	int		i;
	int		j;	j = 0;
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