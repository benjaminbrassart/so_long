/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:20:57 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/22 14:17:34 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "slerror.h"

void	print_error(char const *s)
{
	ft_dputs(2, RED);
	ft_dputs(2, s);
	ft_dputnl(2, RESET);
}
