/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:51:50 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/16 19:38:18 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	cnt;
	int	tf;

	cnt = 0;
	tf = 0;

	if (to_find[0] == '\0')
		return (str);
	while (str[cnt] != '\0')
	{
		tf = 0;
			while (str[cnt + tf] != '\0' && str[cnt + tf] == to_find[tf])
			{
				if (to_find[tf + 1] == '\0')
					return (&str[cnt]);
				tf++;
			}
		cnt++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{ 
	char	batch[] = "AEOuhfCooKiCakhkehucCooKiEcaCooKieabcd";
	char	find[] = "CooKie";

	//TESTER dont touch >:(
	printf("\n-----TEST 1-----\n");

	printf("\nbatch:\n%s\n\nfind:\n%s\n\n", batch, find);
	printf("RESULT:\n     > %s\n", strstr(batch, find));

	printf("\n-----TEST 2-----\n");

	printf("\nbatch:\n%s\n\nfind:\n%s\n\n", batch, find);
	printf("RESULT:\n     > %s\n", ft_strstr(batch, find));

	printf("\n----COMPARE----\n");
	
	printf("\n     1|%s|\n     2|%s|\n", strstr(batch, find), ft_strstr(batch, find));
	
	printf("\n----------------\n\n");

	return (0);
	}
