/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keybinding.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:40:06 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/19 07:04:15 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYBINDING_H
# define KEYBINDING_H

# define KEY_UP 'w'
# define KEY_LEFT 'a'
# define KEY_DOWN 's'
# define KEY_RIGHT 'd'

# ifdef __linux__

#  define XK_MISCELLANY
#  include <X11/keysymdef.h>

#  define KEY_EXIT 0xff1b

# elif defined __APPLE__

#  define KEY_EXIT KEY_ESCAPE

# endif

int	key_handle(int key);

int	destroy_handle(void);

#endif
