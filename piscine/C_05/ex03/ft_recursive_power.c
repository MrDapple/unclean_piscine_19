/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:01:38 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/23 12:01:39 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_recursive_power(int nb, int power)
{
    if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
    if (power > 1)
        nb = nb * (ft_recursive_power(nb, power - 1));
    return (nb);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_recursive_power(-2, 0));
	return (1);
}