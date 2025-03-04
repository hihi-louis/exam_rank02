int	    is_power_of_2(unsigned int n)
{
	unsigned int i = 1;
	if (n == 1)
		return 1;
	while (i < n / 2)
	{
		if (n / i == i)
			return 1;
		i++;
	}
	return 0;
}