#include "fdf.h"

void	print_arr(int **arr, int i_max, int j_max)
{
	int	i = 0;
	int	j = 0;

	while (i < i_max)
	{
		j = 0;
		while (j < j_max)
		{
			printf("%4i", arr[i][j]);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}