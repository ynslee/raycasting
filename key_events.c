/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:50:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/04 10:03:58 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "play.h"

void	arrow_moves(int keysym, t_mlx *mlx)
{
	if (keysym == 123 || keysym == 0) // LEFT
	{
		mlx->x = mlx->x - 5;
		printf("123, 0\n");
	}
	if (keysym == 124 || keysym == 2) // RIGHT
	{
		mlx->x = mlx->x + 5;
		printf("124, 2\n");
	}
	if (keysym == 126 || keysym == 13) // UP
	{
		mlx->y = mlx->y - 5;
		printf("126, 13\n");
	}
	if (keysym == 125 || keysym == 1) // DOWN
	{
		mlx->y = mlx->y + 5;
		printf("125, 1\n");
	}
	render_img(mlx);
}

int	key_event(int keysym, t_mlx *mlx)
{
	if (keysym == K_ESC)
		destroy_flag(mlx, 0);
	arrow_moves(keysym, mlx);
	return (0);
}
