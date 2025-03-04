unsigned int hfc(unsigned int a, unsigned int b)
{
	while (b)
	{
		unsigned int temp = b;
		b = a % b;
		a = temp;
	}
		return a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return 0;
	return ((unsigned int)a/hfc(a, b) * b);
}