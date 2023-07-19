/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:37:29 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/16 16:44:31 by anvoets          ###   ########.fr       */
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
