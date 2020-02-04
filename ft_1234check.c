/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1234check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:14:35 by sjaehyeo          #+#    #+#             */
/*   Updated: 2020/02/04 18:22:49 by sjaehyeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**ft_1234check is a function that checks if there are the same numbers on the up
**down, left and right sides.
*/

#include <stdio.h>

int		ft_1234check(int index, int *ans)
{
	int j;
	int k;
	int l;

	l = 1;
	j = index % N;
	k = index / N;
	while (j-- != 0)
	{
		if (ans[index] == ans[index - l++])
		{
			return (0);
		}
	}
	l = N;
	while (k >= 0)
	{
		if (ans[index] == ans[index - l])
		{
			return (0);
		}
		l = l + N;
		k = k - 1;
	}
	return (1);
}
