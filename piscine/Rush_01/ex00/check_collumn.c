/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collumn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:56:14 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/18 20:02:15 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_collumn_rev(int **tab, int line, int coll)
{
	int	n;
	int	i;
	int	temp;

	n = 0;
	temp = 0;
	i = 5;
	while (--i >= 1)
	{
		if (temp < tab[i][coll])
		{
			temp = tab[i][coll];
			n++;
		}
	}
	if (n != tab[5][coll])
		return (0);
	return (1);
}

int	ft_check_collumn(int **tab. int line, int coll)
{
	int	n;
	int	i;
	int	temp;

	n = 0;
	i = 0;
	temp = 0;
	while (++i <= 4)
	{
		if (temp < tab[i][coll])
		{
			temp = tab[i][coll];
			n++;
		}
	}
	if (n != tab[0][coll])
		return (0);
	return (1);
}
