#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int arg1 = 0;
	int arg2 = 0;
	if (argc == 4)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[3]);
		
		if(argv[2][0]=='+')
		{
			printf("%d", arg1 + arg2);
		}
		if(argv[2][0]=='-')
		{
			printf("%d", arg1 - arg2);
		}
		if(argv[2][0]=='/')
		{
			printf("%d", arg1 / arg2);
		}
		if(argv[2][0]=='%')
		{
			printf("%d", arg1 % arg2);
		}
	}
	printf("\n");
	return (0);
}
