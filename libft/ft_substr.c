/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:12:37 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/23 17:12:58 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	r = (char *)malloc(len + 1);
	if (!r)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && j < ft_strlen(s))
	{
		r[i++] = s[j++];
	}
	r[i] = 0;
	return (r);
}
