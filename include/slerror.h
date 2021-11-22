/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slerror.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:22:08 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 13:11:14 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLERROR_H
# define SLERROR_H

# include "ft_def.h"

# define RED "\033[31m"
# define RESET "\033[0m"

# define ERROR_MALLOC_FAILED "Memory allocation failed"
# define ERROR_ARGUMENT_COUNT "Expected 1 argument"
# define ERROR_FILE_EXTENSION "Map file extension must be '.ber'"
# define ERROR_MAP_SHAPE "Map must be rectangular"
# define ERROR_MAP_WALLS "Map must be surrounded by walls"
# define ERROR_MAP_EXITS "Map must have at least 1 exit"
# define ERROR_MAP_ITEMS "Map must have at least 1 collectible"
# define ERROR_MAP_SPAWNS "Map must have 1 spawn"
# define ERROR_MLX_INIT "Failed to initialize display"
# define ERROR_WINDOW_INIT "Failed to initialize window"
# define ERROR_IMAGE_LOAD "Failed to load image"
# define ERROR_TEXTURE_DIMENSIONS "Texture dimensions must be 32 by 32 pixels"

void	print_error(char const *s);

#endif
