/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:15:46 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/18 19:42:39 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_dup(int **tab, int line, int coll)
{
	int	cnt;

	cnt = 1;
	while (cnt <= 4)
	{
		if (tab[line][cnt] != tab[line][coll] && cnt != coll)
			cnt++;
		else
			return (0);
	}
	cnt = 1;
	{
		if (tab[cnt][coll] != tab[cnt][coll] && cnt != line)
			cnt++;
		else
			return (0);
	}
	return (1);
}
