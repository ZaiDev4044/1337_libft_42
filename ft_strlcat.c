/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:29:02 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/04 13:52:19 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ds;
	size_t	ss;
	size_t	dst2;

	if (dstsize == 0)
		return (ft_strlen(src));
	ss = ft_strlen(src);
	ds = ft_strlen(dst);
	if (dstsize <= ds)
		return (dstsize + ss);
	i = 0;
	dst2 = ds;
	while (src[i] != '\0' && (dst2 + i + 1) < dstsize)
	{
		dst[dst2 + i] = src[i];
		i++;
	}
	dst[dst2 + i] = '\0';
	return (ss + ds);
}
