/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:44:38 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/02 11:06:20 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
