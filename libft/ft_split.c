/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:58:23 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/03/08 19:58:23 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *str, char delim);
static size_t	word_len(char const *str, char delim);
static void		lines(char **result, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	lines(result, s, c);
	return (result);
}

static void	lines(char **result, char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = word_len(s, c);
			result[i] = (char *)malloc((len + 1) * sizeof(char));
			if (!result[i])
				return ;
			ft_strlcpy(result[i], s, len + 1);
			i++;
			s += len;
		}
		else
			s++;
	}
	result[i] = NULL;
}

static int	count_words(char const *str, char delim)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != delim)
		{
			count++;
			while (*str && *str != delim)
				str++;
		}
		else
			str++;
	}
	return (count);
}

static size_t	word_len(char const *str, char delim)
{
	size_t	len;

	len = 0;
	while (*str && *str != delim)
	{
		len++;
		str++;
	}
	return (len);
}
