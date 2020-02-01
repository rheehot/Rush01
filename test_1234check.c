/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:14:35 by sjaehyeo          #+#    #+#             */
/*   Updated: 2020/02/01 16:00:58 by sjaehyeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main()
{
	int ans[16] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 2, 1, 4, 	4, 1, 2, 3};
	printf("%d\n", ft_1234check(1,ans));
	return (0);
}
