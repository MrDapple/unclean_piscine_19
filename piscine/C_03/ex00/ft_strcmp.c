/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:54:33 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/19 13:05:32 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0' && s2[cnt] != '\0')
		cnt++;
	return (s1[cnt] - s2[cnt]);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[6] = "abcde";
	char	b[6] = "abcdef";

	int	res;

	res = strcmp(a, b);
	printf("%d\n", res);

	res = ft_strcmp(a, b);
	printf("%d\n", res);

	return (0);
}
