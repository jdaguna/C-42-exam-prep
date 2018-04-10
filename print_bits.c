/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 12:58:19 by vquesnel          #+#    #+#             */
/*   Updated: 2018/02/01 00:41:09 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	n;

	n = 128;
	while (n > 0)
	{
		if (octet & n)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		n /= 2;
	}
}

int main(void)
{
	unsigned char c = 4;
	print_bits(c);

}
