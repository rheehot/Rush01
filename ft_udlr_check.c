/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_udlr_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:40:35 by sanhan            #+#    #+#             */
/*   Updated: 2020/02/04 18:48:04 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_udlr_check is a function that compares left and right input values at the
** end of a row and up to upper and lower input values in the last row
*/

#include "header.h"

int		r_check(int index, int *udlr[], int *ans)
{
	int i;
	int j;
	int r_value;
	int temp;

	i = 1;
	j = 1;
	r_value = 1;
	while (j <= N)
	{
		if (index == j * N - 1)
		{
			temp = ans[index];
			while (i < N)
			{
				if (temp < ans[index - i])
				{
					temp = ans[index - i];
					r_value++;
				}
				i++;
			}
			if (r_value == udlr[3][index / N])
				return (1);
			else
				return (0);
		}
		j++;
	}
	return (1);
}

int		l_check(int index, int *udlr[], int *ans)
{
	int i;
	int j;
	int l_value;
	int temp;

	i = 1;
	j = 1;
	l_value = 1;
	while (j <= N)
	{
		if (index == j * N - 1)
		{
			temp = ans[index - (N - 1)];
			while (i < N)
			{
				if (temp < ans[index - (N - 1) + i])
				{
					temp = ans[index - (N - 1) + i];
					l_value++;
				}
				i++;
			}
			if (l_value == udlr[2][index / N])
				return (1);
			else
				return (0);
		}
		j++;
	}
	return (1);
}

int		u_check(int index, int *udlr[], int *ans)
{
	int i;
	int u_value;
	int temp;

	i = 0;
	u_value = 1;
	while (index % N == (N - 1))
	{
		temp = ans[index - (N * N - N) + (N * i)];
		while (i < (N - 1))
	{
			if (temp < ans[index - N * N + (N * i)])
			{
				temp = ans[index - N * N + (N * i)];
				u_value++;
			}
			i++;
		}
		if (u_value == udlr[0][index % (N * N - N)])
			return (1);
		else
			return (0);
	}
	return (1);
}

int		d_check(int index, int *udlr[], int *ans)
{
	int i;
	int d_value;
	int temp;

	i = 0;
	d_value = 1;
	while (index % N == (N - 1))
	{
		temp = ans[index];
		while (i < (N - 1))
		{
			if (temp < ans[index - N - (N * i)])
			{
				temp = ans[index - N - (N * i)];
				d_value++;
			}
			i++;
		}
		if (d_value == udlr[1][index % (N * N - N)])
			return (1);
		else
			return (0);
	}
	return (1);
}

int		ft_udlr_check(int index, int *udlr[], int *ans)
{
	if (u_check(index, udlr, ans) && d_check(index, udlr, ans)
			&& l_check(index, udlr, ans) && r_check(index, udlr, ans))
	{
		return (1);
	}
	return (0);
}
