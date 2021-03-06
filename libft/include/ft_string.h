/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:08:58 by bbrassar          #+#    #+#             */
/*   Updated: 2021/11/18 01:52:54 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include "ft_def.h"

void	ft_bzero(void *s, t_size n)
		__attribute__((nonnull(1)));

void	*ft_memset(void *b, int c, t_size len)
		__attribute__((nonnull(1)));

void	*ft_memcpy(void *dst, void const *src, t_size len)
		__attribute__((nonnull(1, 2)));

void	*ft_memccpy(void *dst, void const *src, int c, t_size n)
		__attribute__((nonnull(1, 2)));

void	*ft_memmove(void *dst, void const *src, t_size len)
		__attribute__((nonnull(1, 2)));

void	*ft_memchr(void const *s, int c, t_size n)
		__attribute__((nonnull(1)));

void	*ft_memrchr(void const *s, int c, t_size n)
		__attribute__((nonnull(1)));

void	*ft_rawmemchr(void const *s, int c)
		__attribute__((nonnull(1)));

int		ft_memcmp(void const *s1, void const *s2, t_size n)
		__attribute__((nonnull(1, 2)));

char	*ft_stpcpy(char *dst, char const *src)
		__attribute__((nonnull(1, 2)));

t_size	ft_strlen(char const *s)
		__attribute__((nonnull(1)));

int		ft_strcmp(char const *s1, char const *s2)
		__attribute__((nonnull(1, 2)));

char	*ft_strcpy(char *dst, char const *src)
		__attribute__((nonnull(1, 2)));

char	*ft_strcat(char *dst, char const *src)
		__attribute__((nonnull(1, 2)));

char	*ft_strstr(char const *haystack, char const *needle)
		__attribute__((nonnull(1, 2)));

char	*ft_strchr(char const *s, int c)
		__attribute__((nonnull(1)));

char	*ft_strrchr(char const *s, int c)
		__attribute__((nonnull(1)));

t_size	ft_strspn(char const *s, char const *accept)
		__attribute__((nonnull(1, 2)));

t_size	ft_strcspn(char const *s, char const *reject)
		__attribute__((nonnull(1, 2)));

t_size	ft_strnlen(char const *s, t_size n)
		__attribute__((nonnull(1)));

int		ft_strncmp(char const *s1, char const *s2, t_size n)
		__attribute__((nonnull(1, 2)));

char	*ft_strncpy(char *dst, char const *src, t_size n)
		__attribute__((nonnull(1, 2)));

char	*ft_strncat(char *dst, char const *src, t_size n)
		__attribute__((nonnull(1, 2)));

char	*ft_strndup(char const *s, t_size n)
		__attribute__((malloc, nonnull(1)));

t_size	ft_strlcpy(char *dst, char const *src, t_size dstsize)
		__attribute__((nonnull(1, 2)));

t_size	ft_strlcat(char *dst, char const *src, t_size dstsize)
		__attribute__((nonnull(1, 2)));

char	*ft_strnstr(char const *haystack, char const *needle, t_size len)
		__attribute__((nonnull(1, 2)));

char	*ft_strdup(char const *s)
		__attribute__((malloc, nonnull(1)));

char	*ft_substr(char const *s, unsigned int start, t_size len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strrepeat(char const *s, int times);

char	*ft_strrstr(char const *haystack, char const *needle)
		__attribute__((nonnull(1, 2)));

char	*ft_strpbrk(char const *s, char const *accept)
		__attribute__((nonnull(1, 2)));

char	*ft_strchrnul(char const *s, int c)
		__attribute__((nonnull(1)));

char	*ft_strnew(t_size len);

#endif
