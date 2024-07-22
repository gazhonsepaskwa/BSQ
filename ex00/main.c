#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	min_val(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	else if (b <= a && b < c)
		return (b);
	else
		return (c);
}

int get_len_lines(char *buffer)
{
	int	i;
	int j;

    j = 0;
	i = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i + j] != '\n')
		j++;
	return (j);
}

char	**set_grid(char *buffer)
{
	char **grid;
	int len;
	int	i;
	int j;

    j = buffer[0] - '0';
	i = 0;
	len = get_len_lines(buffer);
	grid = malloc(sizeof(char *) * (len + 1));
	if (!grid)
		return (NULL);
	grid[len] = 0;
	while (i < len)
	{
		grid[i] = malloc(sizeof(char) * (j + 1));
		if (!grid[i])
			return (NULL);
		grid[i][j] = 0;
		i++;
	}
	return (grid);
}

char **fill_grid(char **grid, char *buffer)
{
	int	i;
	int j;
	int	tmp;
	int	col;
	int row;

    row = buffer[0];
	col = get_len_lines(buffer);
	tmp = 5;
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			grid[i][j] = buffer[tmp + j];
			j++;
		}
		tmp += j + 1;
		i++;
	}
	return (grid);
}
/* return 0 if all of the 3 NW directions are 0 */
int	get_smalest_NW_val(int **map, int row, int col)
{
    int smalest;
    int n;
    int nw;
    int w;

	smalest = 0;
    n = map[row - 1][col];
    nw = map[row - 1][col - 1];
    w = map[row][col - 1];
    if ( n < w && n != 0)
        smalest = n;
    else if (w != 0)
        smalest = w;
    if (nw < smalest && nw != 0)
        smalest = nw;

	return (smalest);
}

void	add_smalest_NW_to_curent(int **map, int row, int col)
{
    map[row][col] += get_smalest_NW_val(map, row, col);
}

int	*find_bigest_sqrt(char *buffer,int **map)
{
	int row;
	int col;
	int bigest;
	int *out;

	bigest = 1;
	row = buffer[0];
	col = get_len_lines(buffer);
	while (row > 0)
	{
		col = get_len_lines(buffer);
		while (col > 0)
		{
			if (map[row][col] > bigest)
			{
				bigest = map[row][col];
				out[0] = row;
				out[1] = col;
			}
			col--;
		}
		row--;
	}
	return (out);
}

int main(int ac, char **av)
{
	char buffer[5000];
	int bytes;
	int fd;

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1); //error
	bytes = read(fd, buffer, sizeof(buffer) - 1);
	if (bytes == -1)
		return (1); //error
	buffer[bytes] = '\0';
	close(fd);
	printf("%s\n", buffer);
	char **grid = set_grid(buffer);
	grid = fill_grid(grid, buffer);	int i = 0;
	while (grid[i] != 0)
	{
		printf("%s\n", grid[i]);
		i++;
	}}