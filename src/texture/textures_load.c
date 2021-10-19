/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_load.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:12:48 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 09:34:06 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "mlx.h"
#include "texture.h"

void	textures_load(void)
{
	t_texture *const	textures = _textures();
	t_game *const		game = _game();
	int					i;
	int					dims[2];

	i = -1;
	while (textures[++i].en != T_NONE)
	{
		textures[i].img = mlx_xpm_file_to_image(game->mlx,
				(char *)textures[i].path, &dims[0], &dims[1]);
		if (textures[i].img == FT_NULL)
			slexit(IMAGE_LOAD);
		if (!(dims[0] == 32 && dims[1] == 32))
			slexit(TEXTURE_DIMENSIONS);
	}
}
