/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:24:35 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/23 16:26:03 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}

int	count_char(int n)
{
	int		i;
	int		t;

	i = 1;
	t = abs(n);
	while (t / 10 > 0)
	{
		i++;
		t /= 10;
	}
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		d;
	char	*r;
	int		t;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	d = count_char(n);
	t = abs(n);
	r = (char *)malloc(d + 1);
	if (!r)
		return (NULL);
	r[d--] = 0;
	if (n < 0)
		r[0] = '-';
	while (t > 0)
	{
		r[d--] = t % 10 + 48;
		t /= 10;
	}
	if (n == 0)
		r[0] = 48;
	return (r);
}
