/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:25:18 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/16 12:45:30 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned	int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (s1[cnt] && cnt != n)
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] -= s2[cnt]);
		cnt++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[10] = "ab";
	char	b[10] = "ab";

	int	res;

	res = strncmp(a, b, 4);
	printf("%d\n", res);

	res = ft_strncmp(a, b, 4);
	printf("%d\n", res);

	return (0);
}*/
