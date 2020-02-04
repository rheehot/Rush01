/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:52:00 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/04 18:37:25 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free(int *ans, int **udlr)
{
	int i;

	i = 0;
	free(ans);
	while (i < N)
		free(udlr[i++]);
	free(udlr);
}

int		main(int argc, char *argv[])
{
	int result;
	int **udlr;
	int *ans;
	int i;

	//if (ft_handle_exception(argc, argv) == 0)
	//	return (0);
	ans = (int *)malloc(sizeof(int) * N * N);
	udlr = (int **)malloc(sizeof(int *) * N);
	i = 0;
	while (i < N)
		udlr[i++] = (int *)malloc(sizeof(int) * N);
	ft_atoi(argv[1], udlr);
	result = ft_stack_box(0, udlr, ans);
	if (result)
		ft_print_box(ans);
	else
		write(1, "No Answer\n", 10);
	argc++;
	ft_free(ans, udlr);
	return (0);
}
