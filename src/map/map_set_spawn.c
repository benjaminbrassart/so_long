/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set_spawn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:55:40 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:57:22 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "types.h"

void	map_set_spawn(t_instance *instance, int x, int y)
{
	instance->map.spawn_x = x;
	instance->map.spawn_y = y;
}
