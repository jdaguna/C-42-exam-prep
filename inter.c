#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int tab[256] = {0};
	if(argc == 3)
	{

		//
		//
		// 




		while(argv[1][i])
		{	
			j = 0;
			while(argv[2][j]) // checks to see repeating characters
			{
				if(argv[2][j] == argv[1][i]) // if there is a repeating character, execute the next lines 
				{
	
					if(tab[(int)argv[1][i]] == 0)
					{
						tab[(int)argv[1][i]] = 1;
						write(1, &argv[2][j], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
