#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char a = 'a';
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			a = argv[1][i];
			if(a >=	65 && a <= 77)// uppercase
			{
				a = a + 13;
				write(1, &a, 1);
			}
			else if(a>77 && a <=90)
			{
				a = a - 13;
				write(1,&a, 1);
			}
			else if(a>=97 && a<=109)//lowercase
			{
				a = a+13;
				write(1, &a, 1);
			}
			else if (a>109 && a<123)
			{
				a = a - 13;
				write(1, &a, 1);
			}
			if(  !((a>= 65 && a<=90) || (a>=97 && a<=122)) )
			{
				write(1, &a, 1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
