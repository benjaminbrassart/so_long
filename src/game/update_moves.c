/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 05:28:44 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/08 10:28:19 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include "game.h"
#include "map.h"
#include "mlx.h"
#include <stdlib.h>

static void	_clear_title_bg(void)
{
	int const	width = (int)_map()->width;
	int const	height = (int)_map()->height;
	int			x;
	int			y;

	y = 0;
	while (y < 16)
	{
		x = 0;
		while (x < width * 32)
			mlx_pixel_put(_game()->mlx, _game()->win, x++, height * 32 + y, 0);
		++y;
	}
}

static unsigned int	_uint_size(unsigned int moves)
{
	unsigned int	n;

	n = 1;
	while (moves / 10)
	{
		moves /= 10;
		++n;
	}
	return (n);
}

static char	*_moves_to_text(unsigned int moves)
{
	unsigned int const	prefix_len = ft_strlen(MOVES_PREFIX);
	unsigned int		sz;
	char				*text;

	sz = _uint_size(moves);
	text = ft_calloc(prefix_len + sz + 1, sizeof (*text));
	if (text)
	{
		ft_strcpy(text, MOVES_PREFIX);
		while (sz)
		{
			text[--sz + prefix_len] = moves % 10 + '0';
			moves /= 10;
		}
	}
	return (text);
}

void	update_moves(void)
{
	unsigned int const	h = _map()->height;
	char *const			moves_text = _moves_to_text(_player()->moves);

	if (!moves_text)
		slexit(MALLOC_FAILED);
	_clear_title_bg();
	mlx_string_put(_game()->mlx, _game()->win, 12, h * 32 + 12, MOVES_COLOR,
		moves_text);
	free(moves_text);
}

// void	update_moves(void)
// {
// 	int const	h = _map()->height;
// 	char		*moves_s;
// 	char		*s;

// 	moves_s = ft_itoa(_player()->moves);
// 	if (!moves_s)
// 		slexit(MALLOC_FAILED);
// 	s = ft_calloc(ft_strlen(moves_s) + ft_strlen(MOVES_PREFIX) + 1,
// 			sizeof (char));
// 	if (!s)
// 	{
// 		free(moves_s);
// 		slexit(MALLOC_FAILED);
// 	}
// 	ft_strcat(s, MOVES_PREFIX);
// 	ft_strcat(s, moves_s);
// 	_clear_title_bg();
// 	mlx_string_put(_game()->mlx, _game()->win, 12, h * 32 + 12, 0xffffff, s);
// 	free(moves_s);
// 	free(s);
// }
