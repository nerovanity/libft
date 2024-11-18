/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamani <ihamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:04:32 by ihamani           #+#    #+#             */
/*   Updated: 2024/11/18 14:17:46 by ihamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power(long long tmp, int *sign)
{
	int	len;

	len = 0;
	if (tmp < 0)
	{
		len++;
		*sign = -1;
		tmp = -tmp;
	}
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

static char	*populate_str(char *str, long long num, int len, int sign)
{
	str[len--] = '\0';
	while (num)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		str[len] = '-';
	return (str);
}

char	*ft_itoa(int nb)
{
	int				len;
	char			*str;
	long long		n;
	int				sign;

	n = nb;
	len = 0;
	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	len += ft_power(n, &sign);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	return (populate_str(str, n * sign, len, sign));
}
