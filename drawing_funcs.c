/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:14:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/12 15:18:36 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "play.h"

void	draw_background(t_mlx *mlx)
{
	int	x = 0;
	int	y = 0;

	while (x < WIN_W)
	{
		y = 0;
		while (y < WIN_H)
		{
			my_mlx_pixel_put(mlx, x, y, 0x000000FF);
			y++;
		}
		x++;
	}
}

void	draw_square(t_mlx *mlx, int x, int y)
{
	int sx = 0;
	int sy = 0;

	while (sx < 20)
	{
		sy = 0;
		while (sy < 20)
		{
			my_mlx_pixel_put(mlx, x + sx, y + sy, 0x0000FF00);
			sy++;
		}
		sx++;
	}
}

void	draw_player(t_mlx *mlx)
{
	int	x = 0;
	int	y = 0;

	while (x < 5)
	{
		y = 0;
		while (y < 5)
		{
			my_mlx_pixel_put(mlx, x + mlx->x + 20, y + mlx->y + 20, 0x00FF0000);
			y++;
		}
		x++;
	}
}

void	draw_grid(t_mlx *mlx)
{
	int x = 0;
	int y = 0;

	while (x < WIN_W)
	{
		y = 0;
		while (y < WIN_H)
		{
			my_mlx_pixel_put(mlx, x, y, 0x006400AA);
			y++;
		}
		x = x + 20;
	}
	x = 0;
	y = 0;
	while (x < WIN_W)
	{
		y = 0;
		while (y < WIN_H)
		{
			my_mlx_pixel_put(mlx, x, y, 0x006400AA);
			y = y + 20;
		}
		x++;
	}
}

void	draw_walls(t_mlx *mlx)
{
	int x = 0;
	int y = 0;

	while (x < WIN_W && y < 20)
	{
		draw_square(mlx, x, y);
		x ++;
	}
	x = 0;
	y = 20;
	while (y < WIN_H && x < 20)
	{
		draw_square(mlx, x, y);
		y = y + 20;
		x = 0;
	}
	y = 20;
	x = WIN_W - 20;
	while (y < WIN_H)
	{
		draw_square(mlx, x, y);
		y = y + 20;
	}
	y = WIN_H - 20;
	x = 0;
	while (x < WIN_W)
	{
		draw_square(mlx, x, y);
		x = x + 20;
	}
}
