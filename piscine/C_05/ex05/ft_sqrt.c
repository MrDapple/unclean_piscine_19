/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:53:50 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/23 12:53:52 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_sqrt(int nb)
{
	int cnt;

	cnt = 0;
	while ((cnt * cnt) != nb)
	{
		if (cnt >= nb)
			return (0);
		cnt++;
	}
	return (cnt);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_sqrt(15));
	return (1);
}