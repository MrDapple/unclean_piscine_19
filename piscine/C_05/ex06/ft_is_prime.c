/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:10:15 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/28 11:49:58 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cnt;

	cnt = 2;
	if (nb <= 1)
		return (0);
	while (cnt < nb / cnt)
	{
		if (nb % cnt == 0)
			return (0);
		cnt++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	int	nb;

// 	nb = 0;
// 	while(nb < 100)
// 	{
// 		if(ft_is_prime(nb) == 1)
// 			printf("nr '%d' IS PRIME\n", nb);
// 		else
// 			printf("nr '%d' KO\n", nb);
// 		nb++;
// 	}
// 	return (1);
// }
