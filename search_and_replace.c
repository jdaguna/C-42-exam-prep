#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	

	if(argv[2][1] != '\0' || argv[3][1] != '\0') //checks if args 2 and 3 are only one character
	{
		write(1,"\n",1);
		return (0);
	}
	if(argc == 4)
	{
		if (((argv[2][0] > 64 && argv[2][0] < 91) || (argv[2][0]>96&&argv[2][0]<123) )	&&  ( (argv[3][0] > 64 && argv[3][0] < 91) || (argv[3][0]>96&&argv[3][0]<123) ))//checks if args 2 and 3 are valid letters
		{
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] == argv[2][0])
				{
					write (1, &argv[3][0],1);
				}
				else
					write(1,&argv[1][i],1);
				i++;
			}
		}
		else
		{
			write(1, "\n", 1);
			return (0);
		}
	}
	write(1,"\n",1);
	return (0);
}
