/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:39:37 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/09 17:18:41 by bbrassar         ###   ########.fr       */
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

static char	**_lst_to_map_layers(t_list **head_ptr)
{
	t_size const	map_size = ft_lstsize(*head_ptr);
	char **const	layers = ft_calloc(map_size + 1, sizeof (*layers));
	unsigned int	i;
	t_list			*node;
	t_list			*slow;

	if (layers)
	{
		i = 0;
		node = *head_ptr;
		while (node)
		{
			if (i == 0)
				_map()->width = ft_strlen((char *)node->content);
			slow = node->next;
			layers[i++] = (char *)node->content;
			free(node);
			node = slow;
			++_map()->height;
		}
		--_map()->height;
	}
	return (layers);
}

void	map_load(int fd)
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
			continue ;
		}
		elem = ft_lstnew(line);
		malloc_failed = (elem == FT_NULL);
		ft_lstadd_back(&head, elem);
	}
	if (!malloc_failed)
		_map()->tiles = _lst_to_map_layers(&head);
	if (malloc_failed || _map()->tiles == FT_NULL)
		slexit(MALLOC_FAILED);
}
