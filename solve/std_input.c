/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:21:08 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 17:56:10 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*new_map(void)
{
	char	temp[1000];
	char	buff[5000000];
	int		line;
	int		nb;
	char	*buffer;

	buff[0] = '\0';
	nb = read(0, temp, 99);
	temp[nb] = '\0';
	if (!(chk_f_line(temp)) || !(chk_allowed_char(temp)))
		return (NULL);
	line = ft_atoi(temp);
	if (line == 0)
		return (NULL);
	ft_strcpy(buff, temp);
	buffer = create_buffer(line, buff);
	return (buffer);
}

char	*create_buffer(int line, char buff[5000000])
{
	int		nb;
	int		i;
	char	temp[1000];
	char	*buffer;

	i = 0;
	while (i < line)
	{
		nb = read(0, temp, 999);
		temp[nb] = '\0';
		ft_strcpy(buff, temp);
		i++;
	}
	buffer = malloc(sizeof(char) * ft_strlen(buff) + 1);
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
	ft_strcpy(buffer, buff);
	return (buffer);
}
