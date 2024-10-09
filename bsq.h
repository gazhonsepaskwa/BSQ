/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <lderidde@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:28:19 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/24 18:25:35 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// check/ check.c
int		check(char *buffer);

// check/ chk_allowed_char.c
int		chk_allowed_char(char *bfr);

// check/ chk_f_line.c
int		chk_f_line(char *buffer);

// check/ chk_line_len.c
int		chk_line_len(char *buffer);

// check/ chk_nl.c
int		chk_nl(char *buffer, int buf_len);

// check/ chk_map_line_count.c
int		chk_map_line_count(char *buffer);

// utils/ utils.c
void	ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		is_num(char c);
int		is_printable(char c);

// utils/ utils2.c
int		ft_atoi(char *buffer);
int		ft_strlen(char *str);
void	ft_putstrerror(char *str);

// utils/ grid_utils.c
int		num_lines(char *buffer);
int		get_len_lines(char *buffer);
int		min_val(int a, int b, int c);
char	*read_map(char *file);

// utils/ free.c
void	free_all(char **grid, char *buffer, int **intgrid);

// solve/ solve.c
void	solve_bsq(char *buffer, int argc, int i);

// solve/ grid_int.c
int		**set_intgrid(char *buffer);

// solve/ grid_num.c
void	print_grid(char **grid);
char	**fill_grid(char **grid, char *buffer);
char	**set_grid(char *buffer);

// solve/ std_input.c
char	*new_map(void);
char	*create_buffer(int line, char buff[5000000]);

// solve/ bsq.c
void	fill_square(char **grid, char *buffer, int **intgrid);
int		*find_bsq(int **intgrid);
void	create_bsq(int **intgrid);

// solve/ grid_bin.c
void	grid_binary(char **grid, char *buffer, int **intgrid);

#endif
