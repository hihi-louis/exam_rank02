#include "flood_fill.h"

void  flood_fill(char **tab, t_point size, t_point begin)
{	
	char old_value;

	old_value = tab[begin.y][begin.x];
	fill(tab, size, old_value, begin.x, begin.y);
}

void fill(char **tab, t_point size, char old_value, int x, int y)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != old_value)
		return ;
	if  (tab[y][x] == 'F')
		return ;
	tab[y][x] = 'F';
	fill(tab, size, old_value, x + 1, y);
	fill(tab, size, old_value, x - 1, y);
	fill(tab, size, old_value, x, y + 1);
	fill(tab, size, old_value, x, y - 1);
}