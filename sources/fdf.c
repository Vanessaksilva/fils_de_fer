/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:05:49 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:05:51 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf_header.h"

int	main(int argc, char **argv)
{
	t_data	data;

	get_lines(check_args(argc, argv), argv[1], &data, &data.map);
	found_error((void **) data.dot);
	write_matrix(&data);
	win_initialization(&data);
	handle_hooks(&data);
	mlx_loop(data.mlx_ptr);
}
