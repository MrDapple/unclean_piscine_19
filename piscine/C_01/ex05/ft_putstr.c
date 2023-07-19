/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:07:01 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 10:21:18 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		write (1, &str[cnt], 1);
		cnt++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char c[] = "abdori";

	ft_putstr(c);
	return (0);
}*/
