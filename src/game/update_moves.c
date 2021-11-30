/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 05:28:44 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:50:49 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "game.h"
#include "map.h"
#include "mlx.h"
#include <stdlib.h>

static void	_clear_title_bg(void *display, void *window, t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < 16)
	{
		x = 0;
		while (x < map->width * 32)
			mlx_pixel_put(display, window, x++, map->height * 32 + y, 0);
		++y;
	}
}

static void	_moves_to_text(unsigned int moves, char text[18])
{
	char	buffer[10];
	int		i;

	i = 0;
	while (moves || i == 0)
	{
		buffer[10 - ++i] = moves % 10 + '0';
		moves /= 10;
	}
	ft_bzero(text, 18);
	ft_memcpy(text, "Moves: ", 7);
	ft_memcpy(text + 7, buffer + 10 - i, i);
}

void	update_moves(t_instance *instance)
{
	t_game *const	game = &instance->game;
	t_player *const	player = &instance->player;
	t_map *const	map = &instance->map;
	char			text[18];

	_moves_to_text(player->moves, text);
	_clear_title_bg(game->display, game->window, map);
	mlx_string_put(game->display, game->window, 12, map->height * 32 + 12,
		MOVES_COLOR, text);
}

// void	update_moves(void)
// {
// 	int const	h = _map()->height;
// 	char		*moves_s;
// 	char		*s;

// 	moves_s = ft_itoa(_player()->moves);
// 	if (!moves_s)
// 		slexit(MALLOC_FAILED);
// 	s = ft_calloc(ft_strlen(moves_s) + ft_strlen(MOVES_PREFIX) + 1,
// 			sizeof (char));
// 	if (!s)
// 	{
// 		free(moves_s);
// 		slexit(MALLOC_FAILED);
// 	}
// 	ft_strcat(s, MOVES_PREFIX);
// 	ft_strcat(s, moves_s);
// 	_clear_title_bg();
// 	mlx_string_put(_game()->mlx, _game()->win, 12, h * 32 + 12, 0xffffff, s);
// 	free(moves_s);
// 	free(s);
// }
