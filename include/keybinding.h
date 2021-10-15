/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keybinding.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:40:06 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 09:48:44 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYBINDING_H
# define KEYBINDING_H

# ifdef __linux__

#  define XK_MISCELLANY
#  define XK_LATIN1

#  include <X11/keysymdef.h>

#  define KEY_UP XK_W
#  define KEY_LEFT XK_A
#  define KEY_DOWN XK_S
#  define KEY_RIGHT XK_D
#  define KEY_EXIT 0xff1b

# elif defined __APPLE__

#  define KEY_UP KEY_W
#  define KEY_LEFT KEY_A
#  define KEY_DOWN KEY_S
#  define KEY_RIGHT KEY_D
#  define KEY_EXIT KEY_ESCAPE

# endif

int	key_handle(int key);

int	destroy_handle(void);

#endif
