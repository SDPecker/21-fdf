/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:37:12 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/18 18:10:33 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(void)
{
	char	*ln;
	int		n;
	int		**arr;

	ln = file_to_ln("42.fdf");
	printf("%s\n", ln);
	printf("LN=%i COL:%i\n", count_lines(ln), count_columns(ln));
	arr = ln_to_arr(ln);
	

	return(0);
}