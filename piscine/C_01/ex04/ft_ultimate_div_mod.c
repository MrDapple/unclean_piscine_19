/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:54:11 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 10:06:34 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dif;

	dif = *a / *b;
	*b = *a % *b;
	*a = dif;
}
/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	a = 10;
	b = 3;
	printf ("A = %d\nB = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf ("\nC = %d\nD = %d\n", a, b);
	return (0);
}*/
