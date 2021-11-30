/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:15:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/30 02:55:07 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "types.h"

# define WIN_TITLE "Bulbasaur!"
# define MOVES_COLOR 0xFFFFFF

t_bool	display_init(t_instance *instance);

t_bool	window_init(t_instance *instance);

void	update_moves(t_instance *instance);

#endif
