#include <stdio.h>

char *ft_strrev(char *str)
{
	
	
	
	int i = 0;
	int j = 0;
	char buff;	
	while(str[i])
		i++;
	i--;
	while(j<i)
	{
		buff = str[i];
		str[i]=str[j];
		str[j]=buff;
		i--;
		j++;
	}
	return (str);
}

int main (int argc, char **argv)
{
	argc = argc + 0;
	char *a = ft_strrev(argv[1]);
	printf("%s", a);
	return (0);
}
