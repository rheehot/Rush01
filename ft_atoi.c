/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhan <sanhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:03:07 by sanhan            #+#    #+#             */
/*   Updated: 2020/02/01 13:23:47 by sanhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_atoi(char *str, int (*udlr)[4])
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		udlr[i / 8][(i / 2) % 4] = str[i] - '0';
		}
		i++;
	}
}

int main(void)
{
	char a[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int udlr[4][4];
	int i, j;
	ft_atoi(a, udlr);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d",udlr[i][j]); 
		}
		printf("\n");
	}
}
