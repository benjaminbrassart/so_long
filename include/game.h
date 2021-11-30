/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:15:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:10:39 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "map.h"
# include "player.h"
# include "slerror.h"

# define WIN_TITLE "So long, and thanks for all the fish."
# define MOVES_COLOR 0xFFFFFF

t_bool	display_init(t_instance *instance);

t_bool	window_init(t_instance *instance);

void	update_moves(t_instance *instance);

#endif
