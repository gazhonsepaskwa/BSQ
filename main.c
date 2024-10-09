/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:11:12 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 17:56:38 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*buffer;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			buffer = read_map(argv[i]);
			if (buffer == NULL)
			{
				ft_putstrerror("map error\n");
				return (1);
			}
			if (check(buffer))
				solve_bsq(buffer, argc, i);
		}
	}
	else
	{
		buffer = new_map();
		if (check(buffer))
			solve_bsq(buffer, argc, i);
	}
	return (0);
}
