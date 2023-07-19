/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:45:49 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/16 14:48:01 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cdest;
	int	csrc;

	cdest = 0;
	csrc = 0;
	while (dest[cdest])
		cdest++;
	while (src[csrc])
	{
		dest[cdest] = src[csrc];
		cdest++;
		csrc++;
	}
	dest[cdest] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[3] = "abc";
	char	a[3] = "abc";

	printf("%s\n", c);
	printf("%s\n", a);
	puts(c);
	puts(a);

	return (0);
}*/
