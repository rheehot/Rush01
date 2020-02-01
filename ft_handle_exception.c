/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_exception.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaehyeo <sjaehyeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:17:34 by sjaehyeo          #+#    #+#             */
/*   Updated: 2020/02/01 16:08:20 by seongpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** we have four functions(I'm not good at english)
** ft_argc_check's role = check the argc == 2
** ft_shape_check's role = check strings pattern (number space ....)
** ft_length_check's role = check the strings length (it have 16 int 15 space)
** ft_range_check's role = check the integer's range(1~4)
** ft_handle_exception = it checks everything and if string doesn't have error
** return 1, else return 0 and error message
*/

#include "header.h"

int		ft_argc_check(int argc)
{
	if (argc != 2)
	{
		return (0);
	}
	return (1);
}

int		ft_shape_check(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 != 0)
		{
			if (!(argv[1][i] == ' '))
			{
				return (0);
			}
		}
		else
		{
			if (!(argv[1][i] <= '9' && argv[1][i] >= '0'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int		ft_length_check(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	if (i != 31)
	{
		return (0);
	}
	return (1);
}

int		ft_range_check(char **argv)
{
	int i;

	i = 0;
	while (i < 32)
	{
		if (argv[1][i] < '1' || argv[1][i] > '4')
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

int		ft_handle_exception(int argc, char *argv[])
{
	if (ft_argc_check(argc) == 0)
	{
		write(1, "You didn't give right arguments", 31);
		return (0);
	}
	if (ft_shape_check(argv) == 0)
	{
		write(1, "Your string is ugly", 19);
		return (0);
	}
	if (ft_length_check(argv) == 0)
	{
		write(1, "Your string is too long or too short", 36);
		return (0);
	}
	if (ft_range_check(argv) == 0)
	{
		write(1, "Your string contains integer too big or small", 45);
		return (0);
	}
	return (1);
}
