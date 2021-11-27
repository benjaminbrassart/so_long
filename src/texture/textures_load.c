/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_load.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:12:48 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/27 13:47:59 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "game.h"
#include "mlx.h"
#include "texture.h"

static void	_init_textures(t_instance *instance)
{
	t_texture const	textures[TEXTURE_COUNT] = {
	{TEXTURE_ITEM, "./assets/texture/collectible.xpm", FT_NULL},
	{TEXTURE_EXIT, "./assets/texture/exit.xpm", FT_NULL},
	{TEXTURE_EMPTY, "./assets/texture/ground.xpm", FT_NULL},
	{TEXTURE_WALL, "./assets/texture/wall.xpm", FT_NULL},
	{TEXTURE_PLAYER_UP, "./assets/texture/player_up.xpm", FT_NULL},
	{TEXTURE_PLAYER_LEFT, "./assets/texture/player_left.xpm", FT_NULL},
	{TEXTURE_PLAYER_DOWN, "./assets/texture/player_down.xpm", FT_NULL},
	{TEXTURE_PLAYER_RIGHT, "./assets/texture/player_right.xpm", FT_NULL},
	};

	ft_memcpy(instance->textures, textures, sizeof (textures));
}

t_bool	textures_load(t_instance *instance)
{
	t_texture *const	textures = instance->textures;
	int					i;
	int					dims[2];

	_init_textures(instance);
	i = -1;
	while (++i < TEXTURE_COUNT)
	{
		textures[i].img = mlx_xpm_file_to_image(instance->game.display,
				(char *)textures[i].path, dims, dims + 1);
		if (textures[i].img == FT_NULL)
			print_error(ERROR_IMAGE_LOAD);
		else if (!(dims[0] == 32 && dims[1] == 32))
			print_error(ERROR_TEXTURE_DIMENSIONS);
		else
			continue ;
		textures_destroy(instance);
		return (false);
	}
	return (true);
}
