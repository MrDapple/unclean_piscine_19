/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:28 by anvoets           #+#    #+#             */
/*   Updated: 2023/03/02 11:51:48 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '1';
	k = '2';
	while (i < ('6' + 1))
	{
		while (j < ('7' + 1))
		{
			while (k < ('8' + 1))
			{
				ft_print(i, j, k);
				k++;
			}
			k = ++j + 1;
		}
		j = ++i ;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
