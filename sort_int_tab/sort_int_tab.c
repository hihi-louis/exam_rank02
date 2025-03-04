void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 1;
	int tmp;
	if (size != 0)
	{
		while (i < size)
		{
			if(tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
				i = 0;
			}
			i++;
		}
	}
}

// #include <stdio.h>
// int main()
// {
// 	int tab[5] = {1, 8, 5, 6, 2};
// 	unsigned int size = sizeof(tab) / sizeof(tab[0]);
// 	sort_int_tab(tab, size);
// 	int i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	return 0;
// }