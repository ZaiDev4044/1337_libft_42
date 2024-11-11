/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:20:07 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/06 13:04:08 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static char	*tmp_func(int start, int end, char const *s)
{
	char	*tmp;
	int		j;

	tmp = malloc(end - start + 1);
	if (!tmp)
		return (NULL);
	j = 0;
	while (start < end)
		tmp[j++] = s[start++];
	tmp[j] = '\0';
	return (tmp);
}

static void	freeable_arr(char **arr, int i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

static void	edge_checker(const char *s, int *start, int *end, char c)
{
	while (s[*start] && s[*start] == c)
		*start += 1;
	*end = *start;
	while (s[*end] && s[*end] != c)
		*end += 1;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		start;
	int		end;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	start = 0;
	while (i < count_words(s, c))
	{
		edge_checker(s, &start, &end, c);
		arr[i] = tmp_func(start, end, s);
		if (!arr[i])
			return (freeable_arr(arr, i), NULL);
		i++;
		start = end;
	}
	arr[i] = NULL;
	return (arr);
}
