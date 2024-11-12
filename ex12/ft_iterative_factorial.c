/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:11:40 by sguan             #+#    #+#             */
/*   Updated: 2024/11/10 13:30:11 by sguan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 12;
	printf("%d",ft_iterative_factorial(nb));
	return (0);
}*/
