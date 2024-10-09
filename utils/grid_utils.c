/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:15:27 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 18:01:58 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_len_lines(char *buffer)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (buffer[i] != '\n' && buffer[i])
		i++;
	i++;
	while (buffer[i + j] != '\n' && buffer[i])
		j++;
	return (j);
}

int	min_val(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	else if (b <= a && b < c)
		return (b);
	else
		return (c);
}

int	num_lines(char *buffer)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	res = 0;
	while (buffer[j] != '\n')
		j++;
	while (i < (j - 3))
	{
		res = (res * 10) + (buffer[i] - '0');
		i++;
	}
	return (res);
}

int	check_dir(char *file)
{
	if (open(file, O_WRONLY) == -1)
		return (1);
	return (0);
}

char	*read_map(char *file)
{
	int		bytes;
	int		fd;
	char	*buffer;
	char	temp[100];

	bytes = 0;
	if (check_dir(file))
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while ((read(fd, temp, 100)) > 0)
		bytes += 100;
	close(fd);
	buffer = malloc(sizeof(char) * (bytes + 1));
	if (!buffer)
		return (NULL);
	buffer[bytes] = '\0';
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	bytes = read(fd, buffer, bytes);
	buffer[bytes] = '\0';
	close(fd);
	return (buffer);
}
