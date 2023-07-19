/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:38:14 by anvoets           #+#    #+#             */
/*   Updated: 2023/03/01 15:30:58 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	nb;
	int		i;
	char	c[10];

	nb = nbr;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
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

t_stock_str	*ft_strs_to_tab(int ac, char **av)
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void    ft_show_tab(t_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr("Size: ");
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr("Copy: ");
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
