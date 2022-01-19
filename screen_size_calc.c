/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen_size_calc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:37:51 by amohiam           #+#    #+#             */
/*   Updated: 2022/01/19 19:50:05 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

coords_2d	screen_size_calc(coords_2d mins, coords_2d maxs)
{
	coords_2d	res;

	res.x = (maxs.x - mins.x + 1) * STEP;
	res.y = (maxs.y - mins.y + 1) * STEP;
	return (res);
}
