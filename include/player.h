/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:54:38 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/06 14:33:21 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "keybinding.h"

typedef enum e_side
{
	UP = 0,
	RIGHT = 1,
	DOWN = 2,
	LEFT = 3,
}	t_side;

typedef struct s_player
{
	int				position_x;
	int				position_y;
	unsigned int	moves;
	unsigned int	collectibles;
	t_side			side;
}	t_player;

t_player	*_player(void);

void		player_move(int motion_x, int motion_y);

void		player_draw(void);

void		player_spawn(void);

#endif
