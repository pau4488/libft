/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:04:29 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/03 00:36:19 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *restrict dest, const char *restrict src, size_t n);
size_t  ft_strlcat(char *restrict dest, const char *restrict src, size_t n);
void    *ft_memset(void *s, int c, size_t len);
void    *ft_memmove(void *dest, const void *src, size_t n);

#endif