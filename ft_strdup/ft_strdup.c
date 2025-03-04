#include <stdlib.h>

char *ft_strdup(char *str)
{
	char *new = NULL;
	int i = 0;
	while (str[i])
		i++;
	new = malloc(sizeof(char) * i + 1);
	if (!new)
		return (new);
	i = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return new;
}