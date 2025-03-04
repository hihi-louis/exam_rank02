#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10 + '0'));
}

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int ft_is_prime(int n)
{
	int i = 2;
	if (n == 1)
		return 1;
	while (i < n)
	{
		if (n % i == 0)
			return 1;
		i++;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = ft_atoi(av[1]);
		int i = 0;
		int res = 0;
		while (i <= a)
		{	
			if (ft_is_prime(i) == 0)
				res += i;
			i++;
		}
		ft_putnbr(res);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return 0;
}