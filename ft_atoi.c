#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int neg_flag = 1;
	int res = 0;
	if(str[i]=='-')
	{
		if(str[i+1]=='+')
			return (0);
		neg_flag = -1;
		i++;
	}	
	if((str[i]<48 ||  str[i]>57) && str[i] != '+')
		return (0);
	if(str[i]=='+')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	res *= neg_flag;
	return(res);
}

int main(int argc, char **argv)
{
	argc += 0;
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return (0);

}



