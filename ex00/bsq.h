/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:56:23 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/23 18:58:00 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdio.h> //ENLEVER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# include <stdlib.h>
# include <unistd.h>

// check/ check.c
int	chk_buffer(char *buffer, int buf_len);

// check/ chk_allowed_char.c
int	chk_allowed_char(char *bfr);

// check/ chk_f_line.c
int	chk_f_line(char *buffer);

// check/ chk_line_len.c
int	chk_line_len(char *buffer)

// check/ chk_nl.c
int chk_nl(char *buffer, int buf_len)

// check/ chk_map_line_count.c
int chk_map_line_count(char *buffer);

// utils.c
int	is_num(char c);
int	is_printable(char c);

#endif