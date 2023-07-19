#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*temp;
	len = max - min;
	i = 0;
	temp = (int *)malloc(sizeof(int) * len);
	if (!temp)
	{
		*range = 0;
		return (0);
	}
	if (max < min)
	{
		*temp = 0;
		return (0);
	}
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	*range = temp;
	return (len);
}

#include <stdio.h>

int	main(void)
{
	int	min	= 0;
	int	max = 21;
	int *tab;
	int size;
	int i = 0;

	i = 0;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (1);
}