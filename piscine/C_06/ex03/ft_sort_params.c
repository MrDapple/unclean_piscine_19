/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:56:52 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/23 16:56:53 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0' && s2[cnt] != '\0')
		cnt++;
	return (s1[cnt] - s2[cnt]);
}

int main(int argc, char **argv)
{
    int cnt;

    cnt = argc;
    while (cnt >= 1)
    {
        if ((ft_strcmp(*argv[cnt], *argv[cnt + 1])) <)
    }
}
