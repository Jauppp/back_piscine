	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:07:44 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/07 19:00:44 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	n;
	int	*nbr;
	int	**nbr1;
	int	***nbr2;
	int	****nbr3;
	int	*****nbr4;
	int	******nbr5;
	int	*******nbr6;
	int	********nbr7;
	int	*********nbr8;

	n = 1;
	nbr = &n;
	nbr1 = &nbr;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;

	ft_ultimate_ft(nbr8);

	printf("%d\n", n);
		
}
