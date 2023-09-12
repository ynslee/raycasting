/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:05:24 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/04 10:07:59 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "play.h"

int	destroy_flag(t_mlx *mlx, int flag)
{
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	if (flag == 1)
		exit(1);
	else
		exit (0);
}

int	destroy(t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	exit(0);
}

void	set_hooks(t_mlx *mlx)
{
	mlx_hook(mlx->win_ptr, 17, 1, &destroy, mlx);
	mlx_key_hook(mlx->win_ptr, &key_event, mlx);
	// mlx_mouse_hook(mlx->win_ptr, &mouse_event, mlx);
	// mlx_hook(mlx->win_ptr, 06, 1, &mouse_params, &mlx);
}

int	main(int ac, char *av[])
{
	t_mlx	mlx;

	(void)av;
	if (ac != 1)
		return (0);
	mlx.mlx_ptr = mlx_init();
	if (!mlx.mlx_ptr)
		return (1);
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, WIN_W, WIN_H, "play");
	if (mlx.win_ptr == NULL)
		destroy_flag(&mlx, 1);
	set_hooks(&mlx);
	new_img(&mlx);
	mlx_loop(mlx.mlx_ptr);
	free(mlx.mlx_ptr);
	return (0);
}
