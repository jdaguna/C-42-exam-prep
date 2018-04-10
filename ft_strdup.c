#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *res;

	while(src[i])
		i++;
	res = (char*)malloc(sizeof(*res) * i + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while(src[i])
	{
		res[i]=src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int main(void)
{

	printf("%s", ft_strdup("hello"));
	return (0);
}
