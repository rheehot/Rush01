#include <stdio.h>

int row_check(int index, int (*udlr)[4], int *ans)
{
	int i;
	int r_value;
	int l_value;

	i = 3;
	r_value = 1;
	l_value = 1;
	if (index == 3 || index == 7 || index == 11 || index == 15)
	{
		while (i > 0)
		{
		if (ans[index - i ] < ans[index - i + 1])
			l_value++;
		if (ans[index - i ] > ans[index - i +1])
			r_value++;
		i--;
		}
		if (l_value == udlr[2][index / 4] && r_value == udlr[3][index / 4])
			return (1);
		else
			return (0);
	}
	return (1);
}

int column_check(int index, int (*udlr)[4], int *ans)
{
	int i;
	int u_value;
	int d_value;

	i = 0;
	u_value = 1;
	d_value = 1;
	if (index == 12 || index == 13 || index == 14 || index == 15)
	{
		while (i < 3)
		{
		if (ans[index - 12 + (4 * i)] < ans[index - 8 + (4 * i)])
			u_value++;
		if (ans[index - 12 + 4 * i ] > ans[index - 8 + (4 * i)])
			d_value++;
		i++;
		}
		if (u_value == udlr[0][index % 12] && d_value == udlr[1][index % 12])
			return (1);
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	int ans[] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3};
	int index = 12;
	int udlr[4][4] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	printf("%d\n", row_check(index, udlr, ans));
	printf("%d\n", column_check(index, udlr, ans));
	return 0;
}