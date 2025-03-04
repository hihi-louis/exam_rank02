#include <stdlib.h>
#include <stdio.h>

int count_word(char *str)
{
	int count = 0;
	int in_word = 1;
	while (*str)
	{
		if (*str != 32 && *str != '\t' && *str != '\n' && in_word == 1)
		{
			count++;
			in_word = 0;
		}
		else if (*str == 32 || *str == '\t' || *str == '\n')
			in_word = 1;
		str++;
	}
	return count;
}

char *dup_each_word(char *str)
{
	int i = 0;
	int len = 0;
	while (str[len] && str[len] != 32 && str[len] != '\t' && str[len] != '\n')
	{
		len++;
	}
	char *substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return NULL;
	while (i < len)
	{
		substr[i] = str[i];
		i++;
	}
	substr[i] = '\0';
	return substr;
}

char    **ft_split(char *str)
{
	int count = count_word(str);
	int i = 0;
	char **arr = malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return NULL;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str)
		{
			arr[i] = dup_each_word(str);
			if (!arr[i])
				return NULL;
			i++;
			while (*str && *str != ' ' && *str != '\t' && *str != '\n')
				str++;
		}
	}
	arr[i] = NULL;
	return arr;
}


// int main(void)
// {
// 	char *str = "hello there";
// 	printf("%d\n", count_word(str));
// 	//printf("%s\n", dup_each_word(str));
// 	int count = count_word(str);
// 	char **arr = ft_split(str);
// 	int i = 0;
// 	while (i < count)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	return 0;
// }

































// int count_word(char *str)
// {
// 	int count = 0;
// 	int flag = -1;
// 	while (*str)
// 	{
// 		if (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0' && flag == -1)
// 		{
// 			count++;
// 			flag = 0;
// 		}
// 		else if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\0')
// 			flag = -1;
// 		str++;
// 	}
// 	return count;
// }

// char *dup_each_word(char *str)
// {
// 	char *substr;
// 	int add_null = 0;
// 	int i = 0;
// 	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
// 	{
// 		i++;
// 	}
// 	substr = malloc(sizeof(char) * (i + 1));
// 	if (!substr)
// 		return NULL;
// 	while (add_null < i)
// 	{
// 		substr[add_null] = str[add_null];
// 		add_null++;
// 	}
// 	substr[i] = '\0';
// 	return substr;
// }

// char    **ft_split(char *str)
// {
// 	int i = 0;
// 	int words = count_word(str);
// 	char **split = malloc(sizeof(char *) * (words + 1));
// 	if (!split)
// 		return NULL;

// 	while (*str)
// 	{
// 		while (*str == ' ' || *str == '\t' || *str == '\n')
// 				str++;
		
// 		if (*str)
// 		{
// 			split[i] = dup_each_word(str);
// 			if (!split[i])
// 					return NULL;
// 			i++;
// 			while (*str && *str != ' ' && *str != '\t' && *str != '\n')
// 				str++;
// 		}
// 	}
// 	split[i] = NULL;
// 	return split;
// }

// int main()
// {
// 	char *str = "three words apart (null)";
// 	//printf("%s\n", str);
// 	//printf("%d\n", count_word(str)); 
	
// 	//printf("%s\n", dup_each_word(str));
// 	int i = 0;
// 	while(i < count_word(str))
// 	{
// 		printf("%s\n", ft_split(str)[i]);
// 		i++;
// 	}
// }