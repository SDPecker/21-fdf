/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ln_to_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:14:59 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/09 17:01:40 by amohiam          ###   ########.fr       */
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

int	parse_int(char *ln, int	i)
{
	int	res;

	res = ft_atoi(ln + i);
	while (ln[i] != ' ')
		i++;
	while (ln[i] == ' ')
		i++;
	return (res);
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
	res = (int **)malloc(sizeof(int) * count_columns(ln) * count_lines(ln));
	while (i < count_lines(ln))
	{
		j = 0;
		while (j < count_columns(ln))
		{
			parse_int(ln, c);
			j++;
		}
		i++;
	}
	
	return(res);
}