/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_load.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:12:48 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:37:09 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "mlx.h"
#include "texture.h"

t_bool	textures_load(t_instance *instance)
{
	t_texture *const	textures = instance->textures;
	int					i;
	int					dims[2];

	i = -1;
	while (++i < TEXTURE_COUNT)
	{
		textures[i].img = mlx_xpm_file_to_image(instance->game.window,
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
