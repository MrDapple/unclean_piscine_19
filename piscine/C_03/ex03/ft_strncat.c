/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:37:29 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/16 18:40:49 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cdest;
	unsigned int	csrc;

	cdest = 0;
	csrc = 0;

	while (dest[cdest] != '\0')
		cdest++;
	while (src[csrc] != '\0' && csrc < nb)
	{
		dest[cdest] = src[csrc];
		cdest++;
		csrc++;
	}
	dest[cdest] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[5] = "ab";
	char	b[3] = "cd";
	char	c[4] = "ab";
	char	d[2] = "cd";

	printf("%s\n%s\n", a, b);
	strncat(a, b, 2);
	printf("%s\n", a);

	printf("%s\n%s\n", c, d);
	ft_strncat(c, d, 2);
	printf("%s\n", c);
	return (0);
}
