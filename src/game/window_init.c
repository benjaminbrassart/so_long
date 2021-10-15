/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:22:19 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 09:50:08 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "mlx.h"

void	window_init(void)
{
	t_game *const	game = _game();

	game->mlx = mlx_init();
	if (!game->mlx)
		slexit(MLX_INIT);
	game->win = mlx_new_window(game->mlx, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE);
	if (!game->win)
		slexit(WINDOW_INIT);
	mlx_key_hook(game->win, key_handle, FT_NULL);
	mlx_hook(game->win, 17, 0, destroy_handle, FT_NULL);
	mlx_loop(game->mlx);
}
