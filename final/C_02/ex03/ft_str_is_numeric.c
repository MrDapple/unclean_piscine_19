/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:10:39 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/16 13:48:06 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
		return (1);
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= '0' && str[cnt] <= '9')
			cnt++;
		else
			return (0);
	}
	return (1);
}