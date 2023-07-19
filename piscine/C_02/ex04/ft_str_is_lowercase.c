/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:15:12 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 15:16:49 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
		return (1);
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 'a' && str[cnt] <= 'z')
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
	char	a[] = "Aae";
	int	res;

	res = ft_str_is_lowercase(a);
	printf ("%d\n", res);
	return (0);
}*/
