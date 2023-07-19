#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


int	maketab(int fd)
{
	int		c1;
	int		c2;
	int		c3;
	char	buf = 0;

	c1 = 0;
	c2 = 0;
	c3 = 0;
	while (read(fd, &buf, 1) != 0)
	{
		if (buf <= 32)
			read(fd, &buf, 1);
		else
		{
			while (buf >= '0' && buf <= '9')
			{
				write(1, &buf, 1);
				c3++;
				read(fd, &buf, 1);
			}
			printf("\n length: %d\n\n", c3);
			read(fd, &buf, 1);
			c2++;
			c3 = 0;
			while (buf <= ' ')
				read(fd, &buf, 1);
			while (buf == ':')
				read(fd, &buf, 1);
			while (buf != '\n' )
			{
				write(1, &buf, 1);
				c3++;
				if (read(fd, &buf, 1) == 0)
					buf = '\n';
			}
			printf("\n length: %d\n\n", c3);
			c1++;
			c2 = 0;
			c3 = 0;
		}
	}
	printf("\nlines = %d\n", c1);
	return(1);
}

int main(void)
{
	int fd = open("numbers.dict", O_RDWR);
	maketab(fd);

	return (1);
}