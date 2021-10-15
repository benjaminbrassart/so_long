/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _game.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:17:51 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 05:08:06 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "game.h"

t_game	*_game(void)
{
	static t_game	game = {FT_NULL, FT_NULL};

	return (&_game);
}
