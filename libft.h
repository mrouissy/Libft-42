/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:11:56 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/31 17:41:51 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_memcmp(const void *str1, const void *str2, size_t size);
int		ft_strncmp(const char *str, const char *str1, size_t n);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int i);
int		ft_isprint(int c);

void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t sdest);
size_t	ft_strlen(const char *str);

char 	*ft_substr(char const *s, unsigned int start,size_t len);
char	*ft_strnstr(const char *str, const char *tofind, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *source);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
//char	*ft_itoa(int n);
char	ft_tolower(int c);
char	ft_toupper(int c);

#endif
