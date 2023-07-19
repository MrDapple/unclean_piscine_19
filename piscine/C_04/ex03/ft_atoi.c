/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:58:52 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/21 10:58:53 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	cnt;
	int	mod;
	int	res;

	cnt = 0;
	mod = 1;
	res = 0;
	while ((str[cnt] >= 9 && str[cnt] <= 13) || str[cnt] == 32)
		cnt++;
	while (str[cnt] == '-' || str[cnt] == '+')
	{
		if (str[cnt] == '-')
			mod = mod * -1;
		cnt++;
	}
	while ((str[cnt] >= '0' && str[cnt] <= '9') && str[cnt] != '\0')
	{
		res = res * 10;
		res = res + (str[cnt] - 48);
		cnt++;
	}
	return (res * mod);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(a));
	return (1);
}*/