#include <stdio.h>

int r_check(int index, int (*udlr)[4], int *ans)
{
	int i;
	int r_value;
	int temp;

	i = 1;
	r_value = 1;
	if (index == 3 || index == 7 || index == 11 || index == 15)
	{
		temp = ans[index];
		while (i < 4)
		{
			if (temp < ans[index - i])
			{
				temp = ans[index - i];
				r_value++;
			}
			i++;
		}
		if (r_value == udlr[3][index / 4])
			return (1);
		else
			return (0);
	}
	return (1);
}

int l_check(int index, int (*udlr)[4], int *ans)
{
	int i;
	int l_value;
	int temp;

	i = 1;
	l_value = 1;
	if (index == 3 || index == 7 || index == 11 || index == 15)
	{
		temp = ans[index - 3];
		while (i < 4)
		{
			if (temp < ans[index - 3 + i])
			{
				temp = ans[index  - 3 + i];
				l_value++;
			}
			i++;
		}
		if (l_value == udlr[2][index / 4])
			return (1);
		else
			return (0);
	}
	return (1);
}

int u_check(int index, int (*udlr)[4], int *ans)
{
	int i;
	int u_value;
	int temp;

	i = 0;
	u_value = 1;
	if (index == 12 || index == 13 || index == 14 || index == 15)
	{
		temp = ans[index - 12 + (4 * i)];;
		while (i < 3)
		{
			if (temp < ans[index - 8 + (4 * i)])
			{
				temp = ans[index - 8 + (4 * i)];
				u_value++;
			}
			i++;
		}
		if (u_value == udlr[0][index % 12])
			return (1);
		else
			return (0);
	}
	return (1);
}

int d_check(int index, int (*udlr)[4], int *ans)
{
	int i;
	int d_value;
	int temp;

	i = 0;
	d_value = 1;
	if (index == 12 || index == 13 || index == 14 || index == 15)
	{
		temp = ans[index];
		while (i < 3)
		{
			if (temp < ans[index - 4 - (4 * i)])
			{
				temp = ans[index - 4 - (4 * i)];
				d_value++;
			}
			i++;
		}
		if (d_value == udlr[1][index % 12])
			return (1);
		else
			return (0);
	}
	return (1);
}

int	ft_udlr_check(int index, int (*udlr)[4], int *ans)
{

	printf("%d\n", u_check(index, udlr, ans));
	printf("%d\n", d_check(index, udlr, ans));
	printf("%d\n", l_check(index, udlr, ans));
	printf("%d\n", r_check(index, udlr, ans));
	
	if (u_check(index, udlr, ans) && d_check(index, udlr, ans) 
			&& l_check(index, udlr, ans) && r_check(index, udlr, ans))
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	int ans[] = {
				1, 2, 3, 4,
	   		   	2, 3, 4, 1, 
				3, 4, 1, 2, 
				4, 1, 2, 3
				};
	int index = 14;
	int udlr[4][4] = {
					4, 3, 2, 1, 
					1, 2, 1, 2,
					4, 3, 2, 1, 
					1, 2, 2, 2
					};
	printf("index 			: %d\n", index);
	printf("udlr_check 	: %d\n", ft_udlr_check(index, udlr, ans));
	return 0;
}
