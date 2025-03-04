#include <unistd.h>

#include <string.h>

// int num_len(int i )
// {
// 	int count = 0;

// 	if (i >=0 && i <= 9)
// 		return 1;
// 	while (i / 10 > 0)
// 	{
// 		count ++;
// 	}
// 	if (i % 10 != 0)
// 		count++;
// 	return count;
// }

void ft_putnbr(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		char res = i + '0';
		write(1, &res, 1);
	}
}


int main(void)
{
	int i = 1;
	char newline = '\n';
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i %  5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
		write (1, &newline, 1);
		i++;
	}
}