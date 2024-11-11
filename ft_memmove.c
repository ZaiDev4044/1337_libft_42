/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:35:45 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/06 14:55:42 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (d == s)
		return (d);
	if (d > s)
	{
		while (n > 0)
		{
			((unsigned char *)d)[n - 1] = ((unsigned char *)s)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
			i++;
		}
	}
	return (d);
}
