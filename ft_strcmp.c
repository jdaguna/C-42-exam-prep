#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i]-s2[i]);
}

int main(int argc, char **argv)
{
	argc = argc + 0;
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	printf("%d\n", strcmp(argv[1], argv[2]));	


return (0);
}
