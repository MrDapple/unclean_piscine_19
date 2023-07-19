/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:43:54 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/14 19:19:58 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int	main(void)
{
	int a;
	int	*ptr;
	a = 10;
	ptr = &a;
	printf ("value 1 is %d\n", a);
	ft_ft(ptr);
	printf ("value 2 is %d\n", a);
	return (0);
}
