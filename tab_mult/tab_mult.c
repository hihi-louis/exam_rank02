#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	char res = nbr % 10 + '0';
	ft_putchar(res);
}

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = ft_atoi(av[1]);
		int i = 1;
		int res = 1;
		while (i <= 9)
		{
			res = i * a;
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar('x');
			ft_putchar(' ');
			ft_putnbr(a);
			ft_putchar(' ');
			ft_putchar('=');
			ft_putchar(' ');
			ft_putnbr(res);
			ft_putchar('\n');
			i++;
		}
	}
	else 
		ft_putchar('\n');
	return 0;
}