/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamani <ihamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:42:22 by ihamani           #+#    #+#             */
/*   Updated: 2024/11/17 10:35:46 by ihamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*adr;
	size_t	len;

	len = count * size;
	if (count != 0 && (len / count) != size)
		return (NULL);
	adr = malloc(len);
	if (!adr)
		return (NULL);
	ft_bzero(adr, len);
	return (adr);
}
