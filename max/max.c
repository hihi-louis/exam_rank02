int		max(int* tab, unsigned int len)
{
	unsigned int temp = 0;
	unsigned int i = 0;
	int result = 0;
	if (len >0)
	{
		while (temp < len)
		{
			if (tab[i] >result)
				result = tab[i];
			i++;
			temp++;
		}
		return result;
	}
	return 0;
}
