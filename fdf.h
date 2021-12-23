#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <mlx.h>
#include <stdio.h> //TEST ONLY
#include "libft/libft.h"

typedef struct coords_2d
{
	int	x;
	int	y;
}coords_2d;

typedef struct coords_3d
{
	int	x;
	int	y;
	int	z;
}coords_3d;

int	num_from_fd(char buf, int fd);
int	**parse_points(char *path);
void	print_arr(int **arr, int x, int y);