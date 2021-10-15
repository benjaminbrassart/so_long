/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slexit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:20:57 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 05:44:51 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "slerror.h"
#include <stdlib.h>
#include <string.h>

static char const	*_get_errno_message(t_errno err)
{
	int	i;

	i = 0;
	while (g_errno[i].errno != NONE && g_errno[i].errno != err)
		++i;
	return (g_errno[i].message);
}

static void	_slexit(char const *message)
{
	if (message)
	{
		ft_dprintf(2, "Error: %s\n", message);
		exit(1);
	}
	exit(0);
}

void	slexit(t_errno err)
{
	_slexit(_get_errno_message(err));
}

void	slexit_sys(int err)
{
	_slexit(strerror(err));
}
