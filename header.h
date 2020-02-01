/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:38:20 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/01 10:38:25 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_stack_box(int index, int *udlr[], int *ans);
int ft_check(int index, int *udlr[], int *ans);
void	ft_print_box(int *ans);
void	ft_putchar(char c);

#endif