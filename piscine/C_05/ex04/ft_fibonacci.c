/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:06:43 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/23 12:06:45 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 1)
        return (index);
    if (index > 1)
    {
        index = (ft_fibonacci(index - 2)) + (ft_fibonacci(index - 1));
    }
    return (index);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_fibonacci(-3));
    return (1);
}