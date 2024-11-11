/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:00:47 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/06 14:00:53 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	converter(const char *str, unsigned long long num, size_t i,
		int sign)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			num *= 10;
			num += str[i] - 48;
			if (num > LONG_MAX)
			{
				if (sign == -1)
					return (0);
				return (-1);
			}
		}
		else
			return (num);
		i++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	size_t				i;
	unsigned long long	num;
	int					sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (!(str[i] - '-'))
			sign = -1;
		i++;
	}
	return (converter(str, num, i, sign) * sign);
}
