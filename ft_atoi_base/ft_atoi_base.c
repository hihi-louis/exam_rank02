#include <stdio.h>

int char_to_digit(char c, int str_base)
{
	int value = -1;
	if (c >= '0' && c <= '9')
		value = c - '0';
	else if (c >= 'a' && c <= 'f')
		value = c - 'a' + 10;
	else if (c >= 'A' && c <= 'F')
		value = c - 'A' + 10;

	if (value > str_base)
		return -1;
	return value;
}

int	ft_atoi_base(const char *str, int str_base)
{
	if (str_base < 2 || str_base > 16)
		return 0;
	int i = 0;
	int sign = 1;
	int result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		int digit = char_to_digit(str[i], str_base);
		if (digit == -1)
			break;
		result = result * str_base + digit;
		i++; 
	}
	return (result * sign);
}

// int main()
// {
// 	printf("%d\n", ft_atoi_base("43-1", 16));
// }