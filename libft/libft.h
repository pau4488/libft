/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:04:29 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/11 22:53:11 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define TRUE	(int)1
# define FALSE	(int)0

int ft_isalpha(int c);
int ft_isdigit(int c);
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dest, const char *src, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t n);
void    *ft_memset(void *s, int c, size_t len);
void    *ft_memmove(void *dest, const void *src, size_t n);
int     ft_toupper(int c);
int     ft_tolower(int c);
void    *ft_strchr(const char *s, int c);
void    *ft_strrchr(const char *s, int c);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif