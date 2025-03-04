#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len;
	if (start < end)
		len = end - start + 1;
	else
		len = start - end + 1;
	int *res = malloc(sizeof(int) * len);
	if(!res)
		return NULL;
	if (end < start)
	{
		while (i < len)
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	else if (end > start)
	{
		while (i < len)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		res[0] = 0;
	}
	return res;
}

// int main()
// {
// 	int *res = ft_rrange(0, 0);
// 	int len = 1;
// 	int  i= 0;
// 	while (i < len)
// 	{
// 		printf("%d ", res[i]);
// 		i++;
// 	}
// }