#include <unistd.h>

int ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int flag = 0;
		while (ft_isspace(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (ft_isspace(av[1][i]))
				flag = 1;
			else 
			{
				if (flag)
					write(1, "   ", 3);
				flag = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}