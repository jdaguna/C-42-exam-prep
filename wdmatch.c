#include <unistd.h>

static char		*wdmatch(char *str1, const char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 == *str2)
			str1++;
		str2++;
	}
	if (*str1 == '\0')
		return (str1);
	return (NULL);
}

int				main(int argc, char **argv)
{
	char			*tmp;

	if (argc == 3)
	{
		tmp = wdmatch(argv[1], argv[2]);
		if (tmp != NULL)
			write(1, argv[1], tmp - argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
