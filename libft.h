/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:56:56 by kovnokl           #+#    #+#             */
/*   Updated: 2022/10/14 09:03:26 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *c);
void	*ft_memset(void *s, int c, unsigned long n);
void	ft_bzero(void *s, unsigned long n);
void	*ft_memmove(void *str1, const void *str2, unsigned long n);
void	ft_strlcpy(char *dst, const char *src, unsigned long size);
void	ft_strlcat(char *dst, const char *src, unsigned long size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, unsigned long c);
char	*ft_strrchr(const char *str, unsigned long c);
int		ft_strncmp(const char *str1, const char *str2, unsigned long n);
void	*ft_memchr(const void *str, int c, unsigned long n);
int		ft_memcmp(const void *str1, const void *str2, unsigned long n);
char	*ft_strnstr(const char *big, const char *little);
int		ft_atoi(const char *str);
void	*ft_calloc(int nmemb, int size);
char	*ft_strdup(const char *src);

#endif