/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:22:06 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 11:14:22 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = "123456789";
	int b;

	b = ft_strlen (a);
	printf ("%d\n", b);
	return (0);
}*/
