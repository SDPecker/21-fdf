/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:25:15 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/23 16:26:03 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	t;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		t = (unsigned int)(-1 * n);
	}
	else
		t = (unsigned int)n;
	if (t >= 10)
		ft_putnbr_fd(t / 10, fd);
	ft_putchar_fd((char)(t % 10 + 48), fd);
}
