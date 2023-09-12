/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:11:02 by jhusso            #+#    #+#             */
/*   Updated: 2023/09/04 09:34:22 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define WIN_W 700
# define WIN_H 700
# define MAX_ITER 100

# include "libft/libft.h"
# include "mlx.h"

# include <stdio.h>

# define K_ESC 53

typedef struct s_cursor
{
	double	x;
	double	y;
}	t_cursor;

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		name;
	int		palette;
	void	*img_ptr;
	char	*img_addr;
	int		img_bpp;
	int		line_len;
	int		endian;
	double	x;
	double	y;
}	t_mlx;

//  main.c
int		destroy_flag(t_mlx *mlx, int flag);
int		destroy(t_mlx *mlx);
void	set_hooks(t_mlx *mlx);
void	init_mlx(t_mlx *mlx, int ac, char *av[]);

// image.c
void	my_mlx_pixel_put(t_mlx *mlx, int x, int y, int color);
void	render_img(t_mlx *mlx);
int		new_img(t_mlx *mlx);

// mouse_events.c
int		mouse_params(int x, int y, t_mlx *mlx);
void	zoom_in(t_mlx *mlx);
void	zoom_out(t_mlx *mlx);
int		mouse_event(int button, int x, int y, t_mlx *mlx);

// key_events.c
void	iter_mod(int keysym, t_mlx *mlx);
void	arrow_moves(int keysum, t_mlx *mlx);
int		key_event(int keysym, t_mlx *mlx);


#endif
