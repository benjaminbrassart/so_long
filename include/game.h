/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:15:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/08 10:19:08 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "player.h"
# include "slerror.h"

# define WIN_TITLE "So long, and thanks for all the fish."
# define MOVES_PREFIX "Moves: "
# define MOVES_COLOR 0xffffff

typedef struct s_game
{
	void		*mlx;
	void		*win;
}	t_game;

t_game	*_game(void);

void	display_init(void);

void	window_init(void);

void	update_moves(void);

#endif
