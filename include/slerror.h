/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slerror.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:22:08 by bbrassar          #+#    #+#             */
/*   Updated: 2021/10/15 05:46:47 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLERROR_H
# define SLERROR_H

# include "ft_def.h"

typedef enum e_errno
{
	NONE = 0,
	MALLOC_FAILED,
	ARGUMENT_COUNT,
	FILE_EXTENSION
}	t_errno;

struct s_errno_lt
{
	t_errno		errno;
	char const	*message;
};

static const struct s_errno_lt	g_errno[] = {
	{MALLOC_FAILED, "Memory allocation failed"},
	{ARGUMENT_COUNT, "Expected 1 argument"},
	{FILE_EXTENSION, "Map file extension must be '.ber'"},
	{NONE, FT_NULL}
};

void	slexit(t_errno err);

void	slexit_sys(int err);

#endif
