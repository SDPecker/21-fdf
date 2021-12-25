/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_ln.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 15:03:40 by amohiam           #+#    #+#             */
/*   Updated: 2021/12/25 15:47:26 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

unsigned int count_symbols(char *path)
{
	int	reader;
	int	fd;
	char	*buf;
	unsigned int	res;

	fd = open(path, O_RDONLY);
	buf = (char *)malloc(64);
	reader =read(fd, buf, 64);
	while (reader > 0)
	{
		res += reader;
		reader =read(fd, buf, 64);
	}
	close(fd);
	free(buf);
	return (res);
}

char	*file_to_ln(char *path)
{
	int		fd;
	unsigned int	size;
	char	*res;

	size = count_symbols(path);
	fd = open(path, O_RDONLY);
	res = (char *)malloc(size);
	read(fd, res, size);
	close(fd);
	return (res);
}

int	