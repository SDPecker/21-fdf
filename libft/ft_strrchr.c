/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:12:30 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/23 17:12:58 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	size_t	i;
	char	*r;

	r = (char *)s;
	if (!c)
		return (&r[ft_strlen(r)]);
	i = ft_strlen(s);
	if (!i)
		return (NULL);
	while (i > 0)
	{
		i--;
		if (r[i] == c)
			return (&r[i]);
	}
	return (NULL);
}
