#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	
	int *res;
	int i = 0;
	int len;
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return NULL;
	if (end > start)
	{
		while (i < len)
		{
			res[i] = start;
			start++;
			i++;
		}
		return res;
	}
	else if (end < start )
	{
		while (i < len)
		{
			res[i] = start;
			start--;
			i++;
		}
		return res;
	}
	else
	{
		res[0] = 0;
		return res;
	}
	return NULL;
}

// int main()
// {
// 	int *res = ft_range(3, 3);
// 	int i = 0;
// 	int len = 3 - 3 + 1;
// 	while (i < len)
// 	{
// 		printf("%d ", res[i]);
// 		i++;
// 	}
// }