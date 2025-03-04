#include <unistd.h>

int ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
	{
		return 1;
	}
	return 0;
}

char to_up(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}

char to_low(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return c;
}

int main(int ac, char **av)
{
	int i = 1;
	if (ac > 1)
	{
		while (i <= ac)
		{
			int j = 0;
			while (av[i][j])
			{
				if (av[i][j + 1] == '\0' || av[i][j + 1] == '\t' || av[i][j + 1] == 32)
					av[i][j] = to_up(av[i][j]);
				else
					av[i][j] = to_low(av[i][j]);
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}