/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalebrun <nalebrun@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:56:23 by nalebrun          #+#    #+#             */
/*   Updated: 2024/07/24 10:02:55 by nalebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// check/ check.c
int	check(char *buffer);

// check/ chk_allowed_char.c
int	chk_allowed_char(char *bfr);

// check/ chk_f_line.c
int	chk_f_line(char *buffer);

// check/ chk_line_len.c
int	chk_line_len(char *buffer);

// check/ chk_nl.c
int chk_nl(char *buffer, int buf_len);

// check/ chk_map_line_count.c
int chk_map_line_count(char *buffer);

// utils.c
int	is_num(char c);
int	is_printable(char c);


//LOLO
char	*new_map(void);
void	ft_strcpy(char *dest, char *src);
int ft_atoi(char *buffer);
void	free_all(char **grid, char *buffer);
void	solve_bsq(char *buffer);
char *read_map(char *file);
void	print_intgrid(int **grid);
void	print_grid(char **grid);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_strcpy(char *dest, char *src);
void	fill_square(char **grid, char *buffer, int **intgrid);
int	*find_bsq(int **intgrid);
void	create_bsq(int **intgrid);
void	grid_binary(char **grid, char *buffer, int **intgrid);
char	**fill_grid(char **grid, char *buffer);
int	**set_intgrid(char *buffer);
char	**set_grid(char *buffer);
int	num_lines(char *buffer);
int	get_len_lines(char *buffer);
int	min_val(int a, int b, int c);

#endif