#include "fdf.h"

int	count_ln(char *path)
{
	int		fd;
	int		ctr;
	char	buf;

	fd = open(path, O_RDONLY);
	ctr = 0;
	buf = (char *)malloc(1);
	while (read(fd, buf, 1))
	{
		if(buf == '\n')
			ctr++;
		buf = 0;
	}
	close(fd);
	return(ctr);
}

int	count_col(char *path)
{
	int		fd;
	int		ctr;
	char	buf;

	fd = open(path, O_RDONLY);
	ctr = 0;
	buf = (char *)malloc(1);
	while (read(fd, buf, 1) && buf != '\n')
	{
		if (buf == ' ')
		{
			ctr++;
			while (buf == ' ')
				read(fd, buf, 1);
		}
	}
	close(fd);
	return(ctr + 1);
}

coords_3d	*parse_points(char *path)
{
	coords_3d	*res;
	char		buf;
	int			fd;
	coords_2d	cur;
	coords_2d	max;

	cur.x = 0;
	cur.y = 0;
	max.x = count_col(path);
	max.y = count_ln(path);
	fd = open(path, O_RDONLY);
	res = (coords_3d *)malloc(sizeof(coords_3d) * max.x * max.y);
	while (read(fd, buf, 1))
	{
		
	}
	
}