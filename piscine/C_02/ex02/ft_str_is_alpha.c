/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:41:59 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 15:10:06 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
		return (1);
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 'a' && str[cnt] <= 'z')
			cnt++;
		else if (str[cnt] >= 'A' && str[cnt] <= 'Z')
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
	char	a[] = "ae";
	int	res;

	res = ft_str_is_alpha(a);
	printf ("%d\n", res);
	return (0);
}*/
