/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1234check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:14:35 by sjaehyeo          #+#    #+#             */
/*   Updated: 2020/02/01 15:38:24 by sjaehyeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
