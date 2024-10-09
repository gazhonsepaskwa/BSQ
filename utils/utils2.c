/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:16:34 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 17:23:14 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoi(char *buffer)
{
	int	i;
	int	tmp;
	int	res;

	res = 0;
	i = 0;
	tmp = 0;
	while (buffer[tmp] != '\n')
		tmp++;
	if (tmp < 4)
		return (0);
	while (i < tmp - 3 && tmp >= 4 && (buffer[i] >= '0'
			&& buffer[i] <= '9'))
	{
		if (res > 2147483647 / 10)
			return (0);
		res = (res * 10) + (buffer[i] - '0');
		i++;
	}
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[i])
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_putstrerror(char *str)
{
	int	len;

	len = ft_strlen(str);
	write (2, str, len);
}
