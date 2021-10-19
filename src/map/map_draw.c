/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:25:28 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 07:15:27 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "game.h"
#include "map.h"
#include "mlx.h"
#include "texture.h"

static void	*_get_texture(enum e_texture tnum)
{
	t_texture *const	textures = _textures();
	int					i;

	i = 0;
	while (textures[i].en != T_NONE && textures[i].en != tnum)
		++i;
	return (textures[i].img);
}

void	map_draw_tile(unsigned int x, unsigned int y)
{
	t_game *const	game = _game();
	void			*img;

	img = _get_texture(tile_get_texture(map_get_tile(x, y))->en);
	mlx_put_image_to_window(game->mlx, game->win, img, x * 32, y * 32);
}

void	map_draw(void)
{
	t_map *const	map = _map();
	unsigned int	x;
	unsigned int	y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
			map_draw_tile(x++, y);
		++y;
	}
}
