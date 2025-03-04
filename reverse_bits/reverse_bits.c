unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	int bits = 0;
	while (i < 8)
	{
		bits = (bits << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (bits);
}