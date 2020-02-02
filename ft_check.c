/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:44:38 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/02 11:16:41 by sjaehyeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_check is a function that combines two check functions.
*/

#include "header.h"

int	ft_check(int index, int *udlr[], int *ans)
{
	if (!ft_1234check(index, ans))
		return (0);
	if (!ft_udlr_check(index, udlr, ans))
		return (0);
	return (1);
}
