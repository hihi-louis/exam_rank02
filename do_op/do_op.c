#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv)
{
	if (argc == 4)
	{
		if (argv[1] && argv[2] && argv[3])
		{
			int a = atoi(argv[1]);
			int b = atoi(argv[3]);
			if (argv[2][0] == '+')
			{
				printf("%d", a + b);
			}
			else if (argv[2][0] == '-')
			{
				printf("%d", a - b);
			}
			else if (argv[2][0] == '*')
			{
				printf("%d", a * b);
			}
			else if (argv[2][0] == '/')
			{
				printf("%d", a / b);
			}
			else if (argv[2][0] == '%')
			{
				printf("%d", a % b);
			}
		}
		else
			printf("\n");
	}
	printf("\n");
	return 0;
}