#include <unistd.h>

void ft_print_numbers(void)
{
	char z;
	z = '0';

	while (z <= '9')
	{
		write(1, &z, 1);
		z++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
