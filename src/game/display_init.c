/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 04:25:59 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:48:41 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_def.h"
#include "game.h"
#include "mlx.h"
#include "slerror.h"

t_bool	display_init(t_instance *instance)
{
	t_game *const	game = &instance->game;

	game->display = mlx_init();
	if (!game->display)
	{
		print_error(ERROR_MLX_INIT);
		return (false);
	}
	return (true);
}
