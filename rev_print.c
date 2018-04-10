#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_rev(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while(i > 0)
	{
		i--;
		ft_putchar(str[i]);
	}
return(0);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_rev(argv[1]);
	}
	ft_putchar('\n');
	return(0);
}
