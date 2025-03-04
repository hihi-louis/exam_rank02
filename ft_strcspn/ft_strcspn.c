#include <stddef.h>

static char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return NULL;
}


size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while (s[i])
	{
		if (ft_strchr(reject, s[i]))
			break;
		i++;
	}
	return (i);
}