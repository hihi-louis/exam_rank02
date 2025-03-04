#include <stdlib.h>
#include <stdio.h>
int count_digit(int nbr)
{
	int count = 1;
	while (nbr /= 10)
	{
		count++;
	}
	return count;
}

char	*ft_itoa(int nbr)
{
	long int num;
	int count = 1;
	count = count_digit(nbr);
	if (nbr < 0)
	{
		num = nbr * -1;
		count++;
	}
	else
		num = nbr;
	char *res = malloc(sizeof(char) *(count + 1));
	if (!res)
		return NULL;
	res[count] = '\0';
	while (count--)
	{
		res[count] = num % 10 + '0';
		num = num / 10;
	}
	if (nbr < 0)
		res[0] = '-';
	return (res);
}


// int main()
// {
// 	int digit = 13268;
// 	int a = count_digit(digit);
// 	printf("%s\n", ft_itoa(digit));
// 	printf("%d\n", a);
// }