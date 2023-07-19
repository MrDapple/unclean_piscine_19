/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:02:35 by anvoets           #+#    #+#             */
/*   Updated: 2023/03/01 12:21:18 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	totalsize(char **strs, char *sep, int size)
{
	int	cnt;
	int	c1;
	int	c2;

	cnt = 1;
	c1 = 0;
	c2 = 0;
	while (c1 < size)
	{
		while (strs[c1][c2])
		{
			c2++;
			cnt++;
		}
		c2 = 0;
		c1++;
	}
	while (sep[c2])
		c2++;
	cnt = cnt + (c2 * size);
	return (cnt);
}

int	ft_strlen(char	*str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strcpy(char *dest, char *src, int pos)
{
	int	cnt;

	cnt = 0;
	while (src[cnt] != '\0')
	{
		dest[pos] = src[cnt];
		pos++;
		cnt++;
	}
	dest[pos] = '\0';
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		c1;
	int		c2;
	int		cnt;

	result = malloc(sizeof(char) * totalsize(strs, sep, size));
	c1 = 0;
	c2 = 0;
	cnt = 0;
	if (size == 0)
		result[cnt] = '\0';
	while (c1 < size)
	{
		ft_strcpy(result, strs[c1], cnt);
		cnt = cnt + ft_strlen(strs[c1]);
		c1++;
		if (c1 < size)
		{
			ft_strcpy(result, sep, cnt);
			cnt = cnt + ft_strlen(sep);
		}
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[5];
// 	char	*result;
// 	char	*sep = "_-_-_";
// 	int		size = 5;

// 	tab[0] = "hey";
// 	tab[1] = "bonjour";
// 	tab[2] = "how";
// 	tab[3] = "are";
// 	tab[4] = "you?";
// 	result = ft_strjoin(size, tab, sep);
// 	printf("%s\n", result);
// 	return (1);
// }