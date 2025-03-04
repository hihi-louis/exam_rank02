#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			char c = argv[1][i];
			if (c >= 'A' && c <= 'Z')
			{
				write(1, "_", 1);
				c += 32;
			}
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}