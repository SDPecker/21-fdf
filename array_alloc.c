/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_alloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:17:01 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/18 17:43:31 by amohiam          ###   ########.fr       */
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
