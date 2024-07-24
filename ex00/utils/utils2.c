/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:49:38 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:50:00 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int ft_atoi(char *buffer)
{
	int	i;
	int tmp;
	int	res;	res = 0;
	i = 0;
	tmp = 0;
	while (buffer[tmp] != '\n')
		tmp++;
	while (i < tmp - 3)
	{
		res = (res * 10) + (buffer[i] - '0');
		i++;
	}
	return (res);
}