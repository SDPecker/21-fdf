/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:25:01 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/23 16:26:03 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)dst;
	p = (unsigned char *)src;
	if (r > p)
	{
		while (len > 0)
		{
			r[len - 1] = p[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			r[i] = p[i];
			i++;
		}
	}
	return (dst);
}
