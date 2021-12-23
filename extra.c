/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:13:31 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/23 18:25:42 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	num_from_fd(char buf, int fd)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if (buf == '-')
	{
		sign = -1;
		read(fd, &buf, 1);
	}
	while (buf >= '0' && buf <= '9')
	{
		res = res * 10 + buf - 48;
		read(fd, &buf, 1);
	}
	return (res * sign);
}

void	print_arr(int **arr, int x, int y) //TESTING
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			printf("%5i ", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}