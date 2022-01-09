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

char			*file_to_ln(char *path);
int				**ln_to_arr(char *ln);
int	count_lines(char *ln);
int	count_columns(char *ln);

//TESTING
void	print_arr(int **arr, int i_max, int j_max);