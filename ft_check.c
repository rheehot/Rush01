/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:44:38 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/01 17:37:04 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_1234check(int index, int *ans)
{
	int j;
	int k;
	int l;

	l = 1;
	j = index % 4;
	k = index / 4;
	while (j-- != 0)
	{
		if (ans[index] == ans[index - l++])
		{
			return (0);
		}
	}
	l = 4;
	while (k >= 0)
	{
		if (ans[index] == ans[index - l])
		{
			return (0);
		}
		l = l + 4;
		k = k - 4;
	}
	return (1);
}

int		ft_row_check(int index, int **udlr, int *ans)
{
	int i;
	int r_value;
	int l_value;

	i = 3;
	r_value = 1;
	l_value = 1;
	if (index == 3 || index == 7 || index == 11 || index == 15)
	{
		while (i > 0)
		{
			if (ans[index - i] < ans[index - i + 1])
				l_value++;
			if (ans[index - i] > ans[index - i + 1])
				r_value++;
			i--;
		}
		if (l_value == udlr[2][index / 4] && r_value == udlr[3][index / 4])
			return (1);
		else
			return (0);
	}
	return (1);
}

int		ft_column_check(int index, int **udlr, int *ans)
{
	int i;
	int u_value;
	int d_value;

	i = 0;
	u_value = 1;
	d_value = 1;
	if (index == 12 || index == 13 || index == 14 || index == 15)
	{
		while (i < 3)
		{
			if (ans[index - 12 + (4 * i)] < ans[index - 8 + (4 * i)])
				u_value++;
			if (ans[index - 12 + 4 * i] > ans[index - 8 + (4 * i)])
				d_value++;
			i++;
		}
		if (u_value == udlr[0][index % 12] && d_value == udlr[1][index % 12])
			return (1);
		else
			return (0);
	}
	return (1);
}

int	ft_check(int index, int *udlr[], int *ans)
{
	if (!ft_1234check(index, ans))
		return (0);
	if (!ft_column_check(index, udlr, ans))
		return (0);
	if (!ft_row_check(index, udlr, ans))
		return (0);
	return (1);
}
