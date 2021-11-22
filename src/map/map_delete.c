/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:17:28 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:54:09 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include <stdlib.h>

void	map_delete(t_instance *instance)
{
	t_map *const	map = &instance->map;
	int				i;

	i = 0;
	if (map->tiles)
	{
		while (map->tiles[i])
			free(map->tiles[i++]);
		free(map->tiles);
	}
}
