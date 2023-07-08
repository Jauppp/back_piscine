/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:53:43 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/08 17:58:57 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(2147483647);
}

void	ft_putnbr(int nb)
{
	long int	n;
	char		zero;

	n = nb;
	zero = '0' + n;
	if (n < 0)
	{	
		n *= -1;
		write(1, "-", 1);
	}	
	if (n <= 9)
		write(1, &zero, 1);
	else
	{
		ft_putnbr(n / 10);
		zero = '0' + n % 10;
		write(1, &zero, 1);
	}
}
