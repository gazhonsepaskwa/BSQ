void	free_all(char **grid, char *buffer)
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
}