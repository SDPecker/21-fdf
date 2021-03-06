/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ln_to_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:14:59 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/19 19:43:47 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	count_lines(char *ln)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (ln[i])
	{
		if (ln[i] == '\n')
			res++;
		i++;
	}
	return (res);
}

int	count_columns(char *ln)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (ln[i] && ln[i] != '\n')
	{
		if (ln[i] == ' ')
		{
			res++;
			while (ln[i] == ' ')
				i++;
		}
		i++;
	}
	return (res + 1);
}

int	**ln_to_arr(char *ln)
{
	int	**res;
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	res = alloc_int(count_lines(ln), count_columns(ln));
	while (i < count_lines(ln))
	{
		j = 0;
		while (j < count_columns(ln))
		{
			res[i][j] = ft_atoi(ln + c);
			while (ln[c] != ' ' && ln[c] != '\n')
				c++;
			while (ln[c] == ' ' || ln[c] == '\n')
				c++;
			j++;
		}
		i++;
	}
	return (res);
}
