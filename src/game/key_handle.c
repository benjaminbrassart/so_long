/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:00:26 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/07 19:10:21 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "keybinding.h"
#include <X11/keysymdef.h>

int	key_handle(int key)
{
	int	motion_x;
	int	motion_y;

	if (key == KEY_EXIT)
		slexit(NONE);
	motion_x = 0;
	motion_y = 0;
	if (key == KEY_UP)
		--motion_y;
	else if (key == KEY_DOWN)
		++motion_y;
	else if (key == KEY_LEFT)
		--motion_x;
	else if (key == KEY_RIGHT)
		++motion_x;
	else
		return (0);
	player_move(motion_x, motion_y);
	return (0);
}
