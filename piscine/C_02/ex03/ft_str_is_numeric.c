/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:10:39 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 15:14:21 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
		return (1);
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= '0' && str[cnt] <= '9')
			cnt++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "1314950";
	int	res;

	res = ft_str_is_numeric(a);
	printf ("%d\n", res);
	return (0);
}*/
