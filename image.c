/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:10:22 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/12 15:15:42 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "play.h"

void	my_mlx_pixel_put(t_mlx *mlx, int x, int y, int color)
{
	char	*dst;

	dst = mlx->img_addr + (y * mlx->line_len + x * (mlx->img_bpp / 8));
	*(unsigned int *)dst = color;
}

void	render_img(t_mlx *mlx)
{
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	draw_background(mlx);
	draw_walls(mlx);
	draw_grid(mlx);
	draw_player(mlx);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img_ptr, 0, 0);
}

int	new_img(t_mlx *mlx)
{
	mlx->img_ptr = mlx_new_image(mlx->mlx_ptr, WIN_W, WIN_H);
	if (!mlx->img_ptr)
		return (1);
	mlx->img_addr = mlx_get_data_addr(mlx->img_ptr, &mlx->img_bpp,
			&mlx->line_len, &mlx->endian);
	if (!mlx->img_addr)
		return (1);
	render_img(mlx);
	return (0);
}
