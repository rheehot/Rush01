/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:52:00 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/01 16:39:21 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free(int *ans, int **udlr)
{
	int i;

	i = 0;
	free(ans);
	while (i < 4)
		free(udlr[i++]);
	free(udlr);
}

int		main(int argc, char *argv[])
{
	int result;
	int **udlr;
	int *ans;
	int i;

	if (ft_handle_exception(argc, argv) == 0)
		return (0);
	ans = (int *)malloc(sizeof(int) * 16);
	udlr = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
		udlr[i++] = (int *)malloc(sizeof(int) * 4);
	ft_atoi(argv[1], udlr);
	result = ft_stack_box(0);
	if (result)
		ft_print_box(ans);
	else
		write(1, "Error", 5);
	ft_free(ans, udlr);
	return (0);
}
