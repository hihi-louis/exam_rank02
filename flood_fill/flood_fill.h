#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct s_point
{
	int x;
	int y;
}		t_point;

void fill(char **tab, t_point size, t_point old_value, int x, int y);

#endif
