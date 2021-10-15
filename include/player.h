/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:54:38 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 05:18:39 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "keybinding.h"

typedef enum e_side
{
	UP,
	LEFT,
	DOWN,
	RIGHT
}	t_side;

typedef struct s_player
{
	int				position_x;
	int				position_y;
	unsigned int	moves;
	t_side			side;
}	t_player;

t_player	*_player(void);

void		player_move(int motion_x, int motion_y);

#endif
