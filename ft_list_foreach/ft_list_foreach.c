#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *current_list = begin_list;
	while (current_list)
	{
		(*f)(current_list->data);
		current_list = current_list->next;
	}
}