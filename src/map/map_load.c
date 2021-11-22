/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:39:37 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:54:28 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errno.h"
#include "ft_list.h"
#include "ft_stdlib.h"
#include "ft_stdio.h"
#include "ft_string.h"
#include "get_next_line.h"
#include "map.h"
#include "slerror.h"
#include <stdlib.h>
#include <unistd.h>

static char	**_lst_to_map_layers(t_map *map, t_list **head_ptr)
{
	t_size const	map_size = ft_lstsize(*head_ptr);
	char **const	layers = ft_calloc(map_size + 1, sizeof (*layers));
	int				i;
	t_list			*node;
	t_list			*slow;

	if (layers)
	{
		i = 0;
		node = *head_ptr;
		while (node)
		{
			if (i == 0)
				map->width = ft_strlen((char *)node->content);
			slow = node->next;
			layers[i++] = (char *)node->content;
			free(node);
			node = slow;
			++map->height;
		}
		--map->height;
	}
	return (layers);
}

static t_bool	_map_load_check(t_map *map, t_bool malloc_failed, t_list *head)
{
	if (!malloc_failed)
		map->tiles = _lst_to_map_layers(map, &head);
	if (malloc_failed || map->tiles == FT_NULL)
	{
		print_error(ERROR_MALLOC_FAILED);
		return (false);
	}
	return (true);
}

t_bool	map_load(t_instance *instance, int fd)
{
	int		gnl;
	t_list	*head;
	t_list	*elem;
	char	*line;
	t_bool	malloc_failed;

	head = FT_NULL;
	malloc_failed = false;
	gnl = 1;
	while (gnl > 0)
	{
		gnl = get_next_line(fd, &line);
		if (malloc_failed)
		{
			free(line);
			break ;
		}
		elem = ft_lstnew(line);
		malloc_failed = (elem == FT_NULL);
		ft_lstadd_back(&head, elem);
	}
	return (_map_load_check(&instance->map, malloc_failed, head));
}
