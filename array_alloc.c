/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_alloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:17:01 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/16 20:26:43 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	**alloc_int(int l, int c)
{
	int	i;
	int	**res;

	i = 0;
	res = (int **)malloc(sizeof(int *) * l);
	while (i < l)
	{
		res[i] = (int *)malloc(sizeof(int) * c);
		i++;
	}
	return (res);
}

void	clean_int(int **arr, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}