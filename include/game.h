/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:15:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 04:27:36 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "player.h"
# include "slerror.h"

# define WIN_TITLE "So long, and thanks for all the fish."

typedef struct s_game
{
	void		*mlx;
	void		*win;
}	t_game;

t_game	*_game(void);

void	display_init(void);

void	window_init(void);

#endif
