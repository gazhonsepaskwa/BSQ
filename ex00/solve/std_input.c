/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:50:08 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:50:13 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*new_map(void)
{
	int		nb;
	char	temp[1000];
	char	buff[5000000];
	int		line;
	int		i;
	char	*buffer;	buff[0] = '\0';
	i = 0;
	nb = read(0, temp, 99);
	temp[nb] = '\0';
	line = ft_atoi(temp);
	ft_strcpy(buff, temp);
	while (i < line)
	{
		nb = read(0, temp, sizeof(temp) - 1);
		temp[nb] = '\0';
		ft_strcpy(buff, temp);
		i++;
	}
	buffer = malloc(sizeof(char) * sizeof(buff) + 1);
	buffer[0] = '\0';
	ft_strcpy(buffer, buff);
	return (buffer);
}