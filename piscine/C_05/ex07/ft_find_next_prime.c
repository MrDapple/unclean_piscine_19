/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:10:44 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/28 11:46:42 by anvoets          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	cnt;

	cnt = nb + 1;
	while ((ft_is_prime(cnt)) == 0)
		cnt++;
	return (cnt);
}

// #include <stdio.h>

// int main(void)
// {
//     int nb;

//     nb = 0;
//     while(nb <= 100)
//     {
//         printf("%d -> ", nb);
//         nb = ft_find_next_prime(nb);
//         printf("%d\n", nb);
//     }
//     return (1);
// }
