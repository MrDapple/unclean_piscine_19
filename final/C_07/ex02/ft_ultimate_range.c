/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:46:45 by anvoets           #+#    #+#             */
/*   Updated: 2023/03/01 17:28:52 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	cnt;
	int	*res;

	cnt = max - min;
	res = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * cnt);
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	cnt = 0;
	while (min < max)
	{
		res[cnt] = min;
		cnt++;
		min++;
	}
	return (cnt);
}

#include <stdio.h>

int	main(void)
{
	int	min	= 0;
	int	max = 21;
	int *tab;
	int size;
	int i = 0;

	i = 0;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (1);
}