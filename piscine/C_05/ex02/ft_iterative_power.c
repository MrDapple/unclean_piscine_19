/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:48:51 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/23 11:48:54 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
	return (1);
}