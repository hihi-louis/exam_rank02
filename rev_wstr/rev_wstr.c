#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int start = 0;
		int end;
		while (av[1][i])
			i++;
		i--;
		while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			i--;
		while (i >= 0)
		{
			end = i;
			while (i >= 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
				i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			{
				write(1, &av[1][i], 1);
				i--;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}