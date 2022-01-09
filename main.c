/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:37:12 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/09 17:53:51 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(void)
{
	char	*ln;
	int		**arr;

	ln = file_to_ln("42.fdf");
	arr = ln_to_arr(ln);
	//print_arr(arr, count_lines(ln), count_columns(ln));
	return(0);
}