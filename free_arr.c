/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:42:58 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/18 17:47:18 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

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

void	clean_int(coords_2d **arr, int l)
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