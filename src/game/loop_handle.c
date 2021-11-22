/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:08:05 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:40:09 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "types.h"
#include <stdlib.h>

int	loop_handle(t_instance *instance)
{
	if (!instance->game.running)
		mlx_loop_end(instance->game.display);
	return (0);
}
