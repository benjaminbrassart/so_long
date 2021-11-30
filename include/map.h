/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:37:33 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 03:08:37 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "ft_def.h"
# include "types.h"

t_bool	map_check(t_instance *instance);

void	map_delete(t_instance *instance);

void	map_draw(t_instance *instance);

void	map_draw_tile(t_instance *instance, int x, int y);

t_tile	map_get_tile(t_instance *instance, int x, int y);

t_bool	map_load(t_instance *instance, int fd, char *path);

void	map_set_spawn(t_instance *instance, int x, int y);

void	map_set_tile(t_instance *instance, int x, int y,
			t_tile tile);

#endif
