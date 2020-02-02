#include <stdio.h>

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
	while (k >= -8)
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

int main()
{
	int ans[16] = {1,2,3,4,
				   2,3,4,1,
				   3,4,1,2,
				   4,1,2,3};
	printf("%d\n", ft_1234check(13,ans));
}