/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:13:58 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 10:00:13 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "bsq.h"

int strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_len_lines(char *buffer)
{
	int	i;
	int	j;

    j = 0;
	i = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i + j] != '\n')
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
	int	res;	i = 0;
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

char *read_map(char *file)
{
	int bytes;
	int fd;
	int	i;
	char *buffer;

	bytes = 0;
	char temp[100];
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return NULL;
	while ((read(fd, temp, 100)) > 0)
		bytes += 100;
	close(fd);
	buffer = malloc(sizeof(char) * (bytes + 1));
	buffer[bytes] = '\0';
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return NULL;
	read(fd, buffer, bytes);
	buffer[bytes] = '\0';
	close(fd);
	return (buffer);
}
