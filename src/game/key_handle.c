/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:00:26 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/27 14:18:37 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_def.h"
#include "game.h"
#include "handle.h"
#include "keybinding.h"
#include "mlx.h"
#include "types.h"

int	key_handle(int key, t_instance *instance)
{
	int	mx;
	int	my;

	if (key == KEY_EXIT)
	{
		destroy_handle(instance);
		return (0);
	}
	mx = 0;
	my = 0;
	if (key == KEY_UP)
		--my;
	else if (key == KEY_DOWN)
		++my;
	else if (key == KEY_LEFT)
		--mx;
	else if (key == KEY_RIGHT)
		++mx;
	else
		return (0);
	player_move(instance, mx, my);
	return (0);
}
