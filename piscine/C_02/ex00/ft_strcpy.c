/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:19:46 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/15 12:13:20 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cnt;

	cnt = 0;
	while (src[cnt] != '\0')
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[cnt] = '\0';
	return (0);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		write (1, &str[cnt], 1);
		cnt++;
	}
}

int	main(void)
{
	char	in[] = "test 11";
	char	out[] = "test 2";
	puts(in);
	puts(out);
	ft_strcpy(out, in);
	puts(in);
	puts(out);
	return (0);
}

int	main(void)
{
	char	inT[] = "test 111";
	char	outT[] = "test 22";
	char	in[] = "test 333";
	char	out[] = "test 44";
	ft_putstr(inT);
	printf("\n");
	ft_putstr(outT);
	printf("\n");
	ft_putstr(in);
	printf("\n");
	ft_putstr(out);
	printf("\n\n");
	ft_strcpy(outT, inT);
	strcpy(out, in);
	ft_putstr(inT);
	printf("\n");
	ft_putstr(outT);
	printf("\n");
	ft_putstr(in);
	printf("\n");
	ft_putstr(out);
	printf("\n\n");
	return (0);
}*/
