/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:08:19 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/01 01:06:26 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = i;
	p = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			p = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c)
		p = (char *)s + i;
	return (p);
}
