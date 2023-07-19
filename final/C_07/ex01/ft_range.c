/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:54:53 by anvoets           #+#    #+#             */
/*   Updated: 2023/03/01 12:21:19 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	cnt;
	int	*res;

	cnt = 0;
	res = NULL;
	if (min >= max)
		return (res);
	res = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		res[cnt] = min;
		cnt++;
		min++;
	}
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	min	= 0;
// 	int	max = 21;
// 	int	*str;
// 	int cnt;
// 	int pos;

// 	str = ft_range(min, max);
// 	cnt = 0;
// 	pos = min;
// 	while(pos < max)
// 	{
// 		printf("%d\n", str[cnt]);
// 		pos++;
// 		cnt++;
// 	}
// 	return (1);
// }
