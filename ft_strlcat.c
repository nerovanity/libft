/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamani <ihamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:01:38 by ihamani           #+#    #+#             */
/*   Updated: 2024/11/16 13:18:57 by ihamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;
	size_t	j;

	src_size = ft_strlen(src);
	if (dstsize == 0)
		return (src_size);
	dst_size = ft_strlen(dst);
	if (dstsize <= dst_size)
		return (src_size + dstsize);
	i = dst_size;
	j = 0;
	if (dstsize && src_size)
	{
		while (src[j] && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (dst_size + src_size);
}
