/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab_OG.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvoets <anvoets@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:27:13 by anvoets           #+#    #+#             */
/*   Updated: 2023/02/26 17:50:20 by anvoets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	countlines(int fd)
{
	int		cnt;
	char	buf = 0;

	cnt = 0;
	while (read(fd, &buf, 1) != 0)
	{
		if (buf < '0' || buf > '9')
			read(fd, &buf, 0);
		else
		{
			while (buf >= '0' && buf <= '9')
			{
				read(fd, &buf, 1);
			}
			while (buf <= ' ')
				read(fd, &buf, 1);
			while (buf == ':')
				read(fd, &buf, 1);
			while (buf != '\n' )
			{
				if (read(fd, &buf, 1) == 0)
					buf = '\n';
			}
			cnt++;
		}
	}
	return (cnt);
}

int	cntnblen(char buf, int fd)
{
	int		cnt;

	cnt = 0;
	while (buf >= '0' && buf <= '9')
	{
		read(fd, &buf, 1);
		cnt++;
	}
	while (buf <= 32)
	{
		if (read(fd, &buf, 1) == 0)
			break;
	}
	return (cnt);
}

int	cntstrlen(char buf, int fd)
{
	int		cnt;

	cnt = 0;
	read(fd, &buf, 1);
	while (buf <= 32)
		read(fd, &buf, 1);
	while (buf != '\n')
	{
		if (read(fd, &buf, 1) == 0)
		{
			cnt++;
			break;
		}
		cnt++;
	}
	return (cnt);
}

char **maketab(char *filename, char **tab)
{
	char	buf = 0;
	int		varnb;
	int		varstr;
	int		fd = open(filename, O_RDONLY);
	int		Totallines;
	int		line;
	int		pos;


	varnb = 0;
	varstr = 0;
	Totallines = countlines(fd);
	line = 0;
	pos = 0;
	tab = malloc(sizeof(char *) * ((Totallines * 2) + 1));
	fd = open(filename, O_RDONLY);
	while (read(fd, &buf, 1) != 0)
	{
		if (buf >= '0' || buf <= '9')
			break;
	}
	while (line < Totallines)
	{
		if(read(fd, &buf, 1) != 0)
		{
			if (buf >= '0' || buf <= '9')
			{
				varnb = cntnblen(buf, fd);
				if (varnb > 0)
				{
					tab[pos] = malloc(sizeof(char) * (varnb + 1));
					pos++;
				}
				varstr = cntstrlen(buf, fd);
				if (varstr > 0)
				{
					tab[pos] = malloc(sizeof(char) * (varstr + 1));
					pos++;
				}
			line++;
			}
		}
		else
		{
			break;
		}
	}
	close(fd);
	return (tab);
}

char	**filltab(char *filename, char **tab)
{
	int		fd = open(filename, O_RDONLY);
	int		c1 = 0;
	int		c2 = 0;
	int		Totallines = countlines(fd);
	int		line = 0;
	char	buf = 0;

	fd = open(filename, O_RDONLY);
	read(fd, &buf, 1);
	while (line <= Totallines)
	{
		if (read(fd, &buf, 1) != 0)
		{
			if (buf >= '0' || buf <= '9')
			{
				while(buf >= '0' && buf <= '9')
				{
					tab[c1][c2] = buf;
					c2++;
					read(fd, &buf, 1);
				}
				c2++;
				tab[c1][c2] = '\0';
				while(buf <= 32 || buf == ':')
				{
					read(fd, &buf, 1);
				}
				c2 = 0;
				c1++;
				while(buf != '\n')
				{
					tab[c1][c2] = buf;
					c2++;
					if(read(fd, &buf, 1) == 0)
						break;
				}
				c2++;
				tab[c1][c2] = '\0';
				c2 = 0;
				c1++;
				line++;
			}
		}
		else
		{
			break;
		}
		
	}
	return (tab);
}

char **ft_create_tab(char *filename)
{
	char **tab;
	tab = maketab(filename, tab);
	filltab(filename, tab);
	return(tab);
}
