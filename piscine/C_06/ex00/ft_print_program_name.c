/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:33:21 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/17 11:44:03 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	cnt;

	cnt = 0;
	while (argv[0][cnt])
	{
		write (1, &argv[0][cnt], 1);
		cnt ++;
	}
	write (1, "\n", 1);
	return (argc);
}
