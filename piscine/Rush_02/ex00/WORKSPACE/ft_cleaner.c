/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleaner.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:50:02 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/25 16:59:05 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int ft_cleaner(int fd)
{
	char buf;
	int cnt;
	
	cnt = 0;
	while (read(fd, &buf, 1) != 0)
	{
		if (buf == ' ')
		{
			write(fd, "z", 1);
		}
	}
	return (1);
}

int main(void)
{
	int fd = open("numbers.dict", O_RDWR);
	ft_cleaner(fd);
	return (1);
}