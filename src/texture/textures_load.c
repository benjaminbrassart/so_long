/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_load.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:12:48 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/01 23:18:03 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "mlx.h"
#include "slerror.h"
#include "texture.h"

static void	_init_textures(t_instance *instance)
{
	static int				loaded = 0;
	static t_texture const	textures[TEXTURE_COUNT] = {
	{TEXTURE_ITEM, TEXTURE_DIR "/collectible.xpm", FT_NULL},
	{TEXTURE_EXIT, TEXTURE_DIR "/exit.xpm", FT_NULL},
	{TEXTURE_EMPTY, TEXTURE_DIR "/ground.xpm", FT_NULL},
	{TEXTURE_WALL, TEXTURE_DIR "/wall.xpm", FT_NULL},
	{TEXTURE_PLAYER_UP, TEXTURE_DIR "/player_up.xpm", FT_NULL},
	{TEXTURE_PLAYER_LEFT, TEXTURE_DIR "/player_left.xpm", FT_NULL},
	{TEXTURE_PLAYER_DOWN, TEXTURE_DIR "/player_down.xpm", FT_NULL},
	{TEXTURE_PLAYER_RIGHT, TEXTURE_DIR "/player_right.xpm", FT_NULL},
	};

	if (!loaded)
	{
		loaded = 1;
		ft_memcpy(instance->textures, textures, sizeof (textures));
	}
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
