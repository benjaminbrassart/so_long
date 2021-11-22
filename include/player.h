/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:54:38 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 13:32:15 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "types.h"

void		player_move(t_instance *instance, int mx, int my);

void		player_draw(t_instance *instance);

void		player_spawn(t_instance *instance);

#endif
