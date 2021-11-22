/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:25:28 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:56:28 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "game.h"
#include "map.h"
#include "mlx.h"
#include "texture.h"

static void	*_get_texture(t_instance *instance, t_texture_id tnum)
{
	t_texture *const	textures = instance->textures;
	int					i;

	i = 0;
	while (i < TEXTURE_COUNT)
		++i;
	return (textures[i].img);
}

void	map_draw_tile(t_instance *instance, int x, int y)
{
	t_game *const	game = &instance->game;
	void			*img;

	img = _get_texture(tile_get_texture(instance, map_get_tile(instance.map, x, y)->en));
	mlx_put_image_to_window(game->display, game->window, img, x * 32, y * 32);
}

void	map_draw(t_instance *instance)
{
	t_map *const	map = &instance->map;
	int				x;
	int				y;

	y = -1;
	while (++y < map->height)
	{
		x = -1;
		while (++x < map->width)
			map_draw_tile(instance, x, y);
	}
}
