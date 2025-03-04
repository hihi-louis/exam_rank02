#include <unistd.h>

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int i = 0;
// 		while (av[1][i])
// 			i++;
// 		i--;


// 		while (i >= 0 && ((unsigned char)av[1][i] == ' ' || ((unsigned char)av[1][i] >= 9 && (unsigned char)av[1][i] <= 13)))
// 		{
// 			i--;
// 		}
// 		if (i < 0)
// 		{
// 			write (1, "\n", 1);
// 				return 0;
// 		}

// 		while (i >= 0 && !((unsigned char)av[1][i] == ' ' || ((unsigned char)av[1][i] >= 9 && (unsigned char)av[1][i] <= 13)))
// 			i--;
// 		i++;
// 		while ((unsigned char)av[1][i] >= 33 && (unsigned char)av[1][i] <= 127)
// 		{
// 			write(1, &av[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write (1, "\n", 1);
// 	return 0;
// }

int main (int ac, char **a)
{
	if (ac == 2)
	{
		int i = 0;

		// getting to the end of the string
		while (a[1][i])
			i++;
		i--;
		// looping over the whole string backwards
		// until we found a space
		while (a[1][i] > 32)
			i--;
		i++;
		// getting back to the end and writing the last word to
		// the screen
		while (a[1][i])
		{
			write(1, &a[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}