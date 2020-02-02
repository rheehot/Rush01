/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 07:36:27 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/02 11:06:14 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_stack_box(int index, int *udlr[], int *ans)
{
	int j;

	if (index == 16)
		return (1);
	else
	{
		j = 1;
		while (j <= 4)
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
