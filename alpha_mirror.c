#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int count = 0;
	char in = 'a';
	char a = 'a';
	char A = 'A';
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			in = argv[1][i];
			if(in >= 'a' && in <= 'z')
			{
				while(a != in)
				{
					a++;
					count++;
				}
				count *= 2; //count = count*2
				a = 'a';
				in += 25 - count;
				write(1, &in, 1);
				count = 0;
			}
			else if(in >= 'A' && in <= 'Z')
			{
				while(A != in)
				{
					A++;
					count++;
				}
				count *= 2;
				A = 'A';
				in += 25 -count;
				write(1, &in, 1);
				count = 0;		
			}
			else
				write(1, &in, 1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
