/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_points.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:13:35 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/28 15:37:55 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	arr_nl(int x, int y)
{
	x = 0;
	y++;
}

int	**parse_points(char *path)
{
	int			**res;
	char		buf;
	int			fd;
	coords_2d	cur;
	coords_2d	max;

	cur.x = 0;
	cur.y = 0;
	max.x = count_col(path);
	max.y = count_ln(path);
	fd = open(path, O_RDONLY);
	res = (int **)malloc(sizeof(int) * max.x * max.y);
	while (read(fd, &buf, 1))
	{
		if ((buf >= '0' && buf <= '9') || buf == '-')
		{
			res[cur.y][cur.x] = num_from_fd(buf, fd);
			cur.x++;
			if (cur.x == max.x)
				arr_nl(cur.x, cur.y);
		}
	}
	close(fd);
	return (res);
}
