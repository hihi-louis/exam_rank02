#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *previous;

	current = *begin_list;
	previous = 0;
	t_list *temp;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			temp = current;
			if (previous == NULL)
				*begin_list = current->next;
			else
				previous->next = current->next;
			current = current->next;
			free(temp);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}