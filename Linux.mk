# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Linux.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 07:44:40 by bbrassar          #+#    #+#              #
#    Updated: 2021/10/15 07:49:19 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_MLX	= minilibx-linux

LDFLAGS	+= -lXext -lX11 -lm -lz
