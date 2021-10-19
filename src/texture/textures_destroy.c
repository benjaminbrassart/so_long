/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:26:11 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 10:35:59 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "mlx.h"
#include "texture.h"

void	textures_destroy(void)
{
	t_texture *const	textures = _textures();
	t_game *const		game = _game();
	int					i;

	i = -1;
	while (textures[++i].en != T_NONE)
	{
		if (textures[i].img)
			mlx_destroy_image(game->mlx, textures[i].img);
	}
}
