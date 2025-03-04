#include <unistd.h>

void skip(char *str,int *i )
{
	while (*str == 32 || (*str >= '\t' && *str <= '\r'))
	{
		(str)++;
		(*i)++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;

		while (argv[1][i] != '\0')
		{
			skip(&argv[1][i], &i);
			if ((argv[1][i] >= 33 && argv[1][i] <= 126))
				write(1, &argv[1][i], 1);
			else
				break;
			i++;
			if (argv[1][i] == 32)
				break;
		}
	}
	write(1, "\n", 1);
	return 0;
}