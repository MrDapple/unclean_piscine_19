/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:57:31 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 16:09:57 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 'a' && str[cnt] <= 'z')
			str[cnt] -= 32;
		cnt++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[] = "0aAazZz4";
	puts(a);
	printf("\n");
	ft_strupcase(a);
	puts(a);
	printf("\n");
	return (0);
}*/
