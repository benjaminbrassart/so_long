/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:11:44 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/18 01:57:24 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include "ft_def.h"

int					ft_atoi(char const *s)
					__attribute__((nonnull(1)));

long long			ft_atoll(char const *s)
					__attribute__((nonnull(1)));

void				*ft_calloc(t_size count, t_size size)
					__attribute__((malloc));

void				*ft_pmalloc(t_size size, void **out_p)
					__attribute__((malloc, nonnull(2)));

void				*ft_pcalloc(t_size count, t_size size, void **out_p)
					__attribute__((malloc, nonnull(3)));

char				*ft_itoa(int n)
					__attribute__((malloc));

char				*ft_ltoa(long n)
					__attribute__((malloc));

char				*ft_lltoa(long long n)
					__attribute__((malloc));

int					ft_strtoi(char const *s, char const **endptr)
					__attribute__((nonnull(1)));

long				ft_strtol(char const *s, char const **endptr)
					__attribute__((nonnull(1)));

long long			ft_strtoll(char const *s, char const **endptr)
					__attribute__((nonnull(1)));

unsigned int		ft_strtoui(char const *s, char const **endptr)
					__attribute__((nonnull(1)));

unsigned long		ft_strtoulu(char const *s, char const **endptr)
					__attribute__((nonnull(1)));

unsigned long long	ft_strtoull(char const *s, char const **endptr)
					__attribute__((nonnull(1)));

#endif
