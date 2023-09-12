/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:21:59 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/12 15:15:58 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "play.h"

// void	put_image(t_mlx *mlx, char content, int i, int j)
// {
// 	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->path, i, j);
// 	if (content == 'P')
// 		mlx_put_image_to_window(sl->mlx, sl->window, sl->p_collect, i, j);
// 	else if (content == '1')
// 		mlx_put_image_to_window(sl->mlx, sl->window, sl->wall, i, j);
// 	else if (content == 'C')
// 		mlx_put_image_to_window(sl->mlx, sl->window, sl->collect, i, j);
// 	else if (content == 'E')
// 		mlx_put_image_to_window(sl->mlx, sl->window, sl->exit, i, j);
// }

// void	make_map(t_mlx *mlx)
// {
// 	int		i;
// 	int		j;

// 	i = 0;
// 	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
// 	while (i < WIN_H)
// 	{
// 		j = 0;
// 		while (j < WIN_H)
// 		{
// 			my_mlx_pixel_put(mlx, mlx->map[i][j], j * mlx->line_len, i * mlx->line_len);
// 			j++;
// 		}
// 		i++;
// 	}
// 	steps_on_window(mlx);
// }
