#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char a = 'a';
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			a = argv[1][i];
			if (a >= 'A'  && a <= 'Z')
			{
				while(j < (a - 64))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
				j = 0;
			}	
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while(j < (a - 96))
				{
					write(1, &a, 1);
					j++;
				}
				j = 0;
			}
			write(1, &a, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
