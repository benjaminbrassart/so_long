/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slerror.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:22:08 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/09 15:06:41 by bbrassar         ###   ########.fr       */
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
	IMAGE_LOAD,
	TEXTURE_DIMENSIONS,
}	t_errno;

struct s_errno_lt
{
	t_errno		errnum;
	char const	*message;
};

void	slexit(t_errno err);

void	slexit_sys(int err);

#endif
