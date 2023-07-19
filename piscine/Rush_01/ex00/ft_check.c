/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:31:22 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/18 17:08:49 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_nr(char **str)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	while (c2 < 16)
	{
		if (str[1][c1] >= '1' && str[1][c1] <= '4')
		{
			c1++;
			c1++;
			c2++;
		}
		else
		{
			write(1, "Error2\n", 7);
			return (1);
		}
	}
	return (0);
}

int	ft_check_space(char **str)
{
	int	c1;
	int	c2;

	c1 = 1;
	c2 = 0;
	while (c2 < 15)
	{
		if (str[1][c1] == ' ')
		{
			c1++;
			c1++;
			c2++;
		}
		else
		{
			write(1, "Error3\n", 7);
			return (1);
		}
	}
	return (0);
}

int	ft_check(int check, char **str)
{
	if (check != 2)
	{
		write(1, "error1\n", 7);
		return (1);
	}
	if (ft_check_nr(str) != 0)
		return (1);
	if (ft_check_space(str) != 0)
		return (1);
	if (str[1][32])
	{
		write (1, "OK\n", 3);
		return (0);
	}
	else
	{
		write(1, "error4\n", 7);
		return (1);
	}
	return (2);
}
