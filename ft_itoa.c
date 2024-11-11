/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zben-oma <zben-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 01:11:42 by zben-oma          #+#    #+#             */
/*   Updated: 2024/11/05 12:52:54 by zben-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_operation(int digit_count, int is_neg, int n)
{
	char	*res;

	res = (char *)malloc(digit_count + is_neg + 1);
	if (!res)
		return (NULL);
	res[digit_count + is_neg] = '\0';
	while (digit_count > 0)
	{
		res[digit_count + is_neg - 1] = (n % 10) + '0';
		n /= 10;
		digit_count--;
	}
	if (is_neg)
		res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	int	digit_count;
	int	is_neg;
	int	i;

	digit_count = 0;
	is_neg = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = n;
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	if (n == 0)
		digit_count = 1;
	while (i != 0)
	{
		i /= 10;
		digit_count++;
	}
	return (itoa_operation(digit_count, is_neg, n));
}
