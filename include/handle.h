/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:16:40 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/27 14:39:23 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_H
# define HANDLE_H

# include "types.h"

int	key_handle(int key, t_instance *instance);

int	destroy_handle(t_instance *instance);

#endif
