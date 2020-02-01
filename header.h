/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:38:20 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/01 17:18:01 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_1234check(int index, int *ans);
int		ft_argc_check(int argc);
void	ft_atoi(char *str, int **udlr);
int		ft_check(int index, int *udlr[], int *ans);
int		ft_column_check(int index, int **udlr, int *ans);
int		ft_handle_exception(int argc, char *argv[]);
void	ft_free(int *ans, int **udlr);
int		ft_length_check(char **argv);
void	ft_print_box(int *ans);
void	ft_putchar(char c);
int		ft_range_check(char **argv);
int		ft_row_check(int index, int **udlr, int *ans);
int		ft_shape_check(char **argv);
int		ft_stack_box(int index, int *udlr[], int *ans);

#endif
