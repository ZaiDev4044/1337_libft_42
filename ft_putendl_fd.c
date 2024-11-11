/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 06:13:29 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/06 11:17:25 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	if (fd < 0)
		return ;
	if (!s)
		return ;
	nl = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &nl, 1);
}
