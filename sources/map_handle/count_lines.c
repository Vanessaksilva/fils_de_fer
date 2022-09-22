/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:07:21 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:07:24 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf_header.h"

int	count_lines(char *filename)
{
	int		fd;
	char	c;
	int		lines;

	lines = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("File could not be opened\n", 2);
		exit(1);
	}
	while (read(fd, &c, 1))
	{
		if (c == '\n' || c == 0)
			lines++;
	}
	return (lines);
}
