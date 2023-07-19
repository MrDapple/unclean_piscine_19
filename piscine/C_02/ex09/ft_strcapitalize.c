/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:15:35 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/16 11:52:56 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strcapitalize(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 'a' && str[cnt] <= 'z')
		
	}
	return (0);
}jh

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	puts(a);
	printf("\n");

	ft_strcapitalize(a);

	printf("\nSalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
	puts(a);
	printf("\n");
	return (0);
}
