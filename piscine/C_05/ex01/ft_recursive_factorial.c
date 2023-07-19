/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:18:10 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/23 11:18:12 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    if (nb > 1)
        nb = nb * (ft_recursive_factorial(nb - 1));
    return (nb);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_recursive_factorial(5));
    return (1);
}
