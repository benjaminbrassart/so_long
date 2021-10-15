# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 08:21:38 by bbrassar          #+#    #+#              #
#    Updated: 2021/10/15 05:41:19 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= so_long

CFLAGS				= -Wall -Werror -Wextra -c -MMD -I$(DIR_INCLUDE) \
						-I$(DIR_LIBFT)/include -g

LDFLAGS				= -L$(DIR_LIBFT) -lft -g

DIR_LIBFT			= libft

NAME_LIBFT			= $(DIR_LIBFT)/libft.a

DIR_SRC				= src

SRC					= main.c

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

all:				$(NAME)

clean:
					rm -rf $(DIR_OBJ)

fclean:				clean
					rm -f $(NAME)

.PHONY:				all clean fclean re
