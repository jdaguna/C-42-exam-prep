#include <unistd.h>


int main(int argc, char **argv)
{
	int i = 0;
	char a = 'a';
	if(argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			a = argv[1][i];
			if((a >= 97 && a <= 121) || (a >= 65 && a <= 89))
			{
				a = a + 1;
				write(1, &a, 1);
			}
			else if(a == 122)
			{
				a = 97;
				write(1, &a, 1);
			}
			else if(a == 90)
			{
				a = 65;
				write(1, &a, 1);
			}
			else if(!((a >= 97 && a <= 121) || (a >= 65 && a <= 89)))
				{
					write(1, &a, 1);
				}	
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
