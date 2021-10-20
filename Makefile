# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 08:21:38 by bbrassar          #+#    #+#              #
#    Updated: 2021/10/19 07:27:08 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= so_long

CFLAGS				= -Wall -Werror -Wextra -c -MMD -I$(DIR_INCLUDE) \
						-I$(DIR_LIBFT)/include -I$(DIR_MLX) -g

LDFLAGS				= -L$(DIR_LIBFT) -lft -L$(DIR_MLX) -lmlx -g

include $(shell uname).mk

NAME_MLX			= $(DIR_MLX)/libmlx.a

DIR_LIBFT			= libft

NAME_LIBFT			= $(DIR_LIBFT)/libft.a

DIR_SRC				= src

SRC					= main.c \
						$(addprefix game/, \
							_game.c key_handle.c slexit.c window_init.c \
							destroy_handle.c display_init.c update_moves.c \
						) \
						$(addprefix map/, \
							_map.c map_load.c map_check.c map_get_tile.c \
							map_draw.c map_set_spawn.c map_set_tile.c \
						) \
						$(addprefix player/, \
							_player.c player_move.c player_draw.c \
							player_spawn.c \
						) \
						$(addprefix texture/, \
							_textures.c textures_load.c textures_destroy.c \
							get_texture.c \
						) \
						$(addprefix tile/, \
							_tile_textures.c tile_get_texture.c \
						)

DIR_OBJ				= obj

OBJ					= $(addprefix $(DIR_OBJ)/, $(SRC:.c=.o))

DIR_INCLUDE			= include

DEPENDENCIES		= $(OBJ:.o=.d)

$(NAME):			$(NAME_LIBFT) $(OBJ)
					$(CC) $(filter %.o, $^) -o $@ $(LDFLAGS)

$(DIR_OBJ)/%.o:		$(DIR_SRC)/%.c
					@mkdir -p $(@D)
					$(CC) $(CFLAGS) $< -o $@

-include $(DEPENDENCIES)

$(NAME_LIBFT):
					$(MAKE) -C $(DIR_LIBFT) libft.a clean

$(NAME_MLX):
					$(MAKE) -C $(DIR_MLX) libmlx.a

all:				$(NAME)

clean:
					rm -rf $(DIR_OBJ)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
