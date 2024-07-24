/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:02:13 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 10:03:18 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*buffer;	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			buffer = read_map(argv[i]);
			if (buffer == NULL)
			{
				ft_putstr("map error\n");
				return (1);
			}
		if (check(buffer))
				solve_bsq(buffer);
		}
	}
	else
	{
		buffer = new_map();
		if (check(buffer))
			solve_bsq(buffer);
	}
	return (0);
}
