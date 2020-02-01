/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 07:36:27 by seongpar          #+#    #+#             */
/*   Updated: 2020/02/01 18:31:12 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
** int ft_stack_box() : 16칸에 박스를 쌓는 함수, 답을 찾으면 1을 반환 아니면 0을 반환한다
** int index : 0부터 15까지 배열을 가리키는 인덱스
** int **udlr : 위쪽 행 아래쪽 행, 왼쪽 열 오른쪽 열의 상자 개수를 담고 있는 이차원 배열
** int *ans : 답을 저장할 할 배열
*/

int	ft_stack_box(int index, int *udlr[], int *ans)
{
	int j;
	
	ft_print_box(ans);
	write(1, "\n", 1);
	
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
