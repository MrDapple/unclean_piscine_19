/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:11:16 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 16:12:27 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 'A' && str[cnt] <= 'Z')
			str[cnt] += 32;
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
	ft_strlowcase(a);
	puts(a);
	printf("\n");
	return (0);
}*/
