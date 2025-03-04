#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av) {
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		int i = atoi(av[1]);

		while (i >= 1)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d\n", i);
				return 0;
			}
			i--;
		}
	
	}
	printf("\n");
    return 0;
}