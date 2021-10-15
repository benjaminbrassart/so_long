/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slerror.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:22:08 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 09:42:14 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLERROR_H
# define SLERROR_H

# include "ft_def.h"

typedef enum e_errno
{
	NONE = 0,
	MALLOC_FAILED,
	ARGUMENT_COUNT,
	FILE_EXTENSION,
	MAP_SHAPE,
	MAP_WALLS,
	MAP_EXITS,
	MAP_COLLECTIBLES,
	MAP_SPAWNS,
	MLX_INIT,
	WINDOW_INIT,
}	t_errno;

struct s_errno_lt
{
	t_errno		errnum;
	char const	*message;
};

static const struct s_errno_lt	g_errno[] = {
	{MALLOC_FAILED, "Memory allocation failed"},
	{ARGUMENT_COUNT, "Expected 1 argument"},
	{FILE_EXTENSION, "Map file extension must be '.ber'"},
	{MAP_SHAPE, "Map must be rectangular"},
	{MAP_WALLS, "Map must be surrounded by walls"},
	{MAP_EXITS, "Map must have at least 1 exit"},
	{MAP_COLLECTIBLES, "Map must have at least 1 collectible"},
	{MAP_SPAWNS, "Map must have 1 spawn"},
	{MLX_INIT, "Failed to initialize display"},
	{WINDOW_INIT, "Failed to initialize window"},
	{NONE, FT_NULL}
};

void	slexit(t_errno err);

void	slexit_sys(int err);

#endif
