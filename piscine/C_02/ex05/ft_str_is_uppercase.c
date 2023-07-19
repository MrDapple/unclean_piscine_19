/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:17:34 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 15:19:06 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
		return (1);
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 'A' && str[cnt] <= 'Z')
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
	char	a[] = "ABCEKJ";
	int	res;

	res = ft_str_is_uppercase(a);
	printf ("%d\n", res);
	return (0);
}*/
