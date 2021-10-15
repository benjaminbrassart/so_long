/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiles.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:29:43 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 05:14:10 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TILES_H
# define TILES_H

typedef enum e_tile
{
	ERROR = 0,
	EMPTY = '0',
	WALL = '1',
	ITEM = 'C',
	EXIT = 'E',
	SPAWN = 'P',
}	t_tile;

#endif
