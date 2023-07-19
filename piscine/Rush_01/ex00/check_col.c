/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:54:52 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/18 19:50:09 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col(int **tab, int line, int coll)
{
	int cnt;

	cnt = 2;
	while (cnt <= tab[0][coll])
	{
		if (tab[cnt][coll] > tab[cnt - 1][coll])
			cnt++;
		else 
			return (0);
	}
	return (1);
}:
