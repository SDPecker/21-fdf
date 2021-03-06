/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:38:18 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/19 21:41:13 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <mlx.h>
#include <stdio.h> //TEST ONLY
#include "libft/libft.h"

#define STEP 10

typedef struct coords_2d
{
	int	x;
	int	y;
}coords_2d;

char		*file_to_ln(char *path);
int			**ln_to_arr(char *ln);
int			count_lines(char *ln);
int			count_columns(char *ln);
int			**alloc_int(int l, int c);
void		clean_int(int **arr, int l);
coords_2d	**arr_to_proj(int **arr, int l, int c);

//TESTING
void		print_arr(int **arr, int i_max, int j_max);
int			parse_int(char *ln, int	i);
coords_2d	**init_coords(int l, int c);
