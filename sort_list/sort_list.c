#include "list.h"
#include <stdlib.h>
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *node;
	node = lst;
	int temp;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = node;
		}
		else
			lst = lst->next;
	}
	lst = node;
	return lst;
}