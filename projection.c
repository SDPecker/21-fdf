/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:00:13 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/17 22:03:09 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

coords_2d	**init_coords(int l, int c)
{
	coords_2d	**res;
	int			i;

	i = 0;
	res = (coords_2d **)malloc(sizeof(coords_2d *) * l);
	while (i < l)
	{
		res[i] = (coords_2d *)malloc(sizeof(coords_2d) * c);
		i++;
	}
	return (res);
}

coords_2d	**arr_to_proj(int **arr, int l, int c)
{
	coords_2d	**res;
	int			i;
	int			j;
	int			step;
	int			mid;

	i = 0;
	j = 0;
	step = SCREEN_WIDTH / (3 * (l + c));
	mid = l * step;
	res = init_coords(l, c);
	while (i < l)
	{
		j = 0;
		while (j < c)
		{
			res[i][j].x = (c - l) * step + mid;
			
		}
		i++;
	}
	
}