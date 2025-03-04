#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' && str[i] == '+')
	{
		if(str[i] == '-')
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

void puthex(int a)
{
	int res = 0;
	char *base = "0123456789abcdef";
	if (a > 15)
		puthex(a / 16);
	res = a % 16;
	write(1, &base[res], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = ft_atoi(av[1]);
		puthex(a);
	}
	write(1, "\n", 1);
	return 0;
}
