#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		int space = 0;
		while (ft_isspace(av[1][i]))
			i++;
		while (av[1][i])
		{
			char c = av[1][i];
			if (ft_isspace(c) == 1)
				space = 1;
			else
			{
				if (space)
					write(1, " ", 1);
				space = 0;
				write(1, &c, 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
