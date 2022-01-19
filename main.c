/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:37:12 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/19 19:50:05 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(void)
{
	char		*ln;
	int			n;
	int			**arr;
	coords_2d	**coord;

	ln = file_to_ln("42.fdf");
	//printf("%s\n", ln);
	//printf("LN=%i COL:%i\n", count_lines(ln), count_columns(ln));
	arr = ln_to_arr(ln);
	coord = init_coords(count_lines(ln), count_columns(ln));
	//printf("%i %i\n", coord[0][0].x, coord[0][0].y);
	return(0);
}
