/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:13:29 by zben-oma          #+#    #+#             */
/*   Updated: 2024/10/31 03:43:10 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t num)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)p;
	i = 0;
	while (num > i)
	{
		d[i] = (unsigned char)value;
		i++;
	}
	return (d);
}
