/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_stack_box.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:12:36 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/01 10:12:45 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(void)
{
	int **udlr = (int **)malloc(sizeof(int *) * 16);
	int *ans = (int *)malloc(sizeof(int) * 16);
	int result;

	result = ft_stack_box(0, udlr, ans);
	if (result)
		printf("success\n");
	else
		printf("fail\n");
	ft_print_box(ans);
	return (0);
}
