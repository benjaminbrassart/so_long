/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_handle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:47:42 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/29 22:23:25 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_def.h"
#include "handle.h"
#include "map.h"
#include "mlx.h"
#include "texture.h"
#include <stdlib.h>

int	destroy_handle(t_instance *instance)
{
	map_delete(instance);
	textures_destroy(instance);
	if (instance->game.display)
	{
		if (instance->game.window)
			mlx_destroy_window(instance->game.display, instance->game.window);
		mlx_destroy_display(instance->game.display);
		free(instance->game.display);
	}
	exit(instance->game.exit_status);
	return (0);
}
