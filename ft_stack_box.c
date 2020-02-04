/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 07:36:27 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/04 18:03:02 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_stack_box is a function that builds boxes through the checks functions,
** recursive and backtracking and call ft_print_box if there is an answer,
** and print ERROR if there is no answer.
*/

#include "header.h"

int	ft_stack_box(int index, int *udlr[], int *ans)
{
	int j;

	if (index == N * N)
		return (1);
	else
	{
		j = 1;
		while (j <= N)
		{
			ans[index] = j++;
			if (!ft_check(index, udlr, ans))
				continue;
			if (ft_stack_box(index + 1, udlr, ans))
				return (1);
		}
	}
	return (0);
}
