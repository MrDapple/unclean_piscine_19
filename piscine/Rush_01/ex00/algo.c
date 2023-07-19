/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brminner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:42:23 by brminner          #+#    #+#             */
/*   Updated: 2023/02/18 16:25:20 by brminner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_line_rev(int **tab, int a, int b)
{
	int	n;
	int	i;
	int	temp;

	n = 0;
	temp = 0;
	i = 5;
	while (--i >= 1)
	{
		if (temp < tab[a][i])
		{
			temp = tab[a][i];
			n++;
		}
	}
	if (n != tab[a][5])
		return (0);
	return (1);
}

int	ft_check_line(int **tab. int a, int b)
{
	int	n;
	int	i;
	int	temp;

	n = 0;
	i = 0;
	temp = 0;
	while (++i <= 4)
	{
		if (temp < tab[a][i])
		{
			temp = tab[a][i];
			n++;
		}
	}
	if (n != tab[a][0])
		return (0);
	return (1);
}

int	check_value(int **tab, int a, int b)
{
	if (ft_check_dup(tab, a, b))
		return (0);
	if (b == 4)
		if (ft_check_line(tab, a, b) == 1 && ft_check_line_rev(tab, a, b) == 1)
			return (0);
}

int	backtrack(int **tab, int n)
{
	int	a;
	int	b;
	int	i;

	a = n / 4 + 1;
	b = n % 4 + 1;
	i = 0;
	if (n == 17)
		return (1);
	while (++i <= 4)
	{
		tab[a][b] = i;
		if (check_value(tab, a, b))
		{
			if (backtrack(tab, n + 1))
				return (1);
			tab[a][b] = 0;
		}
	}
	tab[a][b] = 0;
	return (0);
}
