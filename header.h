/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:38:20 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/04 18:32:05 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# define N 4

int		ft_1234check(int index, int *ans);
int		ft_argc_check(int argc);
void	ft_atoi(char *str, int **udlr);
int		ft_check(int index, int *udlr[], int *ans);
int		ft_handle_exception(int argc, char *argv[]);
void	ft_free(int *ans, int **udlr);
int		ft_length_check(char **argv);
void	ft_print_box(int *ans);
void	ft_putchar(char c);
int		ft_range_check(char **argv);
int		ft_shape_check(char **argv);
int		ft_stack_box(int index, int *udlr[], int *ans);
int		r_check(int index, int *udlr[], int *ans);
int		l_check(int index, int *udlr[], int *ans);
int		u_check(int index, int *udlr[], int *ans);
int		d_check(int index, int *udlr[], int *ans);
int		ft_udlr_check(int index, int *udlr[], int *ans);

#endif
