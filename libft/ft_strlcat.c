/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:25:34 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/23 16:26:03 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = ft_strlen(dst);
	j = 0;
	r = ft_strlen(src);
	if (size < i)
	{
		r += size;
		return (r);
	}
	else
		r += i;
	while (i + 1 < size && src[j])
		dst[i++] = src[j++];
	dst[i] = 0;
	return (r);
}
