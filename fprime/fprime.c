#include <stdio.h>
#include <stdlib.h>

int ft_isprime(int c)
{
	int i = 2;
	if (c < 2)
		return -1;
	while (i * i <= c)
	{
		if (c % i == 0)
			return -1;
		i++;
	}
	return 0;
}

int ft_next_prime(int prime)
{
	while (1)
	{
		prime++;
		if (ft_isprime(prime) == 0)
			return prime;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = atoi(av[1]);
		int prime = 2;
		if (a == 1)
		{
			printf("%d", a);
			printf("\n");
			return 0;
		}
		int flag = 1;
		while (prime <= a)
		{
			while (a % prime == 0)
			{
				if (flag == 0)
					printf("*");
				printf("%d", prime);
				a /= prime;
				flag = 0;
			}
			prime = ft_next_prime(prime);
		}
	}
	printf("\n");
	return 0;
}

