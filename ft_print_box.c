/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:24:47 by sjaehyeo          #+#    #+#             */
/*   Updated: 2020/02/02 11:19:31 by sjaehyeo         ###   ########.fr       */
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

	i = 0;
	while (i < 16)
	{
		if (i != 3 && i != 7 && i != 11 && i != 15)
		{
			ft_putchar(ans[i] + '0');
			ft_putchar(' ');
		}
		if (i == 3 || i == 7 || i == 11 || i == 15)
		{
			ft_putchar(ans[i] + '0');
			ft_putchar('\n');
		}
		i++;
	}
}
