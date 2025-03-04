#include <unistd.h>

int main(int ac, char **av)
{
	
	if (ac > 1)
	{
		int i = 1;

		while (i < ac)
		{
			int j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				j++;
			}
		
			j = 0;
	
			while (av[i][j])
			{
				if ((av[i][j - 1] == '\0' || av[i][j -1] == 32 || av[i][j - 1] == '\t') && (av[i][j] >= 'a' && av[i][j] <= 'z'))
				{
						av[i][j] -= 32;
				}	
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