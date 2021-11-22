/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set_spawn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 06:55:40 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 15:11:33 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	map_set_spawn(t_instance *instance, int x, int y)
{
	instance->map.spawn_x = x;
	instance->map.spawn_y = y;
}
