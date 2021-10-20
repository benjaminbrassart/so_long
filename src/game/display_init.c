/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 04:25:59 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/20 06:16:52 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "mlx.h"
#include "slerror.h"

void	display_init(void)
{
	t_game *const	game = _game();

	game->mlx = mlx_init();
	if (!game->mlx)
		slexit(MLX_INIT);
}
