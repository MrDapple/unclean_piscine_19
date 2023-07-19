/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:53:02 by anvoets           #+#    #+#             */
/*   Updated: 2023/03/01 15:30:39 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	len;
	char	*dest;

	len  = ft_strlen(src);
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	if (!dest)
		return NULL;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int	i;

	i = 0;
	if (!(ptr = (t_stock_str*)malloc(sizeof(*ptr) * (ac + 1))))
		return NULL;
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		if (!(ptr[i].str = ft_strdup(av[i])))
			return NULL;
		else if (!(ptr[i].copy = ft_strdup(av[i])))
			return NULL;
		i++;
	}
	ptr[i].str = NULL;
	return ptr;
}

int main(int argc, char *argv[])
{
	t_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);
	int	i = 0;

	while (result[i].str != NULL)
	{
		printf("Size: %d\n", result[i].size);
		printf("Str: %s\n", result[i].str);
		printf("Copy: %s\n", result[i].copy);
		i++;
	}
	return 0;
}