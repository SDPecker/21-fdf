/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:00:13 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/19 19:47:31 by amohiam          ###   ########.fr       */
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

	i = 0;
	j = 0;
	res = init_coords(l, c);
	while (i < l)
	{
		j = 0;
		while (j < c)
		{
			res[i][j].x = c - l;
			res[i][j].y = ((c + l) / 2) + arr[i][j];
			j++;
		}
		i++;
	}
	return (res);
}

coords_2d	get_mins(coords_2d **proj, int l, int c)
{
	int			i;
	int			j;
	coords_2d	res;

	res.x = proj[0][0].x;
	res.y = proj[0][0].y;
	i = 0;
	j = 0;
	while (i < l)
	{
		j = 0;
		while (j < c)
		{
			if (proj[i][j].x < res.x)
				res.x = proj[i][j].x;
			if (proj[i][j].y < res.y)
				res.y = proj[i][j].y;
			j++;
		}
		i++;
	}
	return (res);
}

coords_2d	get_maxs(coords_2d **proj, int l, int c)
{
	int			i;
	int			j;
	coords_2d	res;

	res.x = proj[0][0].x;
	res.y = proj[0][0].y;
	i = 0;
	j = 0;
	while (i < l)
	{
		j = 0;
		while (j < c)
		{
			if (proj[i][j].x > res.x)
				res.x = proj[i][j].x;
			if (proj[i][j].y > res.y)
				res.y = proj[i][j].y;
			j++;
		}
		i++;
	}
	return (res);
}
