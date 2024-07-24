/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:55:41 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 09:34:42 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "bsq.h"

int is_num(char c)
{
	return ((c >= '1' && c <= '9'));
}

int is_printable(char c)
{
	return ((c >= 33 && c <= 126));
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

    i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}