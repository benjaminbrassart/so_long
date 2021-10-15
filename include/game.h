/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:15:29 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 05:27:25 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "player.h"
# include "slerror.h"

typedef struct s_game
{
	void		*mlx;
	void		*win;
}	t_game;

t_game	*_game(void);

#endif
