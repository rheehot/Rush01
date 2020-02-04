/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:24:47 by sjaehyeo          #+#    #+#             */
/*   Updated: 2020/02/04 18:22:27 by sjaehyeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_print_box is a function that prints the answer according to its format
*/

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_box(int *ans)
{
	int i;
	int j;
	
	i = 0;
	j = 1;
	while (i < N * N)
	{
		ft_putchar(ans[i] + '0');
		if (i % N == (N - 1))
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}∂
}
