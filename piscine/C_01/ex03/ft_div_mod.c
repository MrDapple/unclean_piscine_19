/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:36:32 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 09:53:52 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	dif;
	int	rem;
	a = 10;
	b = 3;
	dif = 0;
	rem = 0;
	printf ("a   = %d\nb   = %d\ndiv = %d\nres = %d\n", a, b, dif, rem);
	ft_div_mod(a, b, &dif, &rem);
	printf ("\na   = %d\nb   = %d\ndiv = %d\nres = %d\n", a, b, dif, rem);
	return (0);
}*/
