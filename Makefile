# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 08:21:38 by bbrassar          #+#    #+#              #
#    Updated: 2021/11/22 13:19:32 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= so_long

CFLAGS				= -Wall -Werror -Wextra -c -MMD -I$(DIR_INCLUDE) \
						-I$(DIR_LIBFT)/include -I$(DIR_MLX) -g

LDFLAGS				= -L$(DIR_LIBFT) -lft -L$(DIR_MLX) -lmlx -g

ifeq ($(DEBUG), true)
CFLAGS				+= -g

LDFLAGS				+= -g
endif

include $(shell uname).mk

NAME_MLX			= $(DIR_MLX)/libmlx.a

DIR_LIBFT			= libft

NAME_LIBFT			= $(DIR_LIBFT)/libft.a

DIR_SRC				= src

SRC					= main.c \
						$(addprefix game/, \
							key_handle.c loop_handle.c display_init.c \
							update_moves.c print_error.c window_init.c \
							destroy_handle.c \
						) \
						$(addprefix map/, \
							map_load.c map_check.c map_get_tile.c map_delete.c \
							map_draw.c map_set_spawn.c map_set_tile.c \
						) \
						$(addprefix player/, \
							player_move.c player_draw.c player_spawn.c \
						) \
						$(addprefix texture/, \
							textures_load.c textures_destroy.c get_texture.c \
						) \
						$(addprefix tile/, \
							get_tile_textures.c tile_get_texture.c \
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

$(NAME_LIBFT):		.FORCE
					$(MAKE) DEBUG=$(DEBUG) -C $(DIR_LIBFT) libft.a

$(NAME_MLX):		.FORCE
					$(MAKE) DEBUG=$(DEBUG) -C $(DIR_MLX) libmlx.a

all:				$(NAME)

clean:
					rm -rf $(DIR_OBJ)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

.FORCE:

.PHONY:				all clean fclean re
