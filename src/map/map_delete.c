/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:17:28 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/09 17:22:14 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <stdlib.h>

void	map_delete(void)
{
	t_map *const	map = _map();
	int				i;

	i = 0;
	if (map->tiles)
	{
		while (map->tiles[i])
			free(map->tiles[i++]);
		free(map->tiles);
	}
}
