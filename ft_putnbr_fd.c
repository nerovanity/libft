/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamani <ihamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:12:57 by ihamani           #+#    #+#             */
/*   Updated: 2024/11/16 19:09:30 by ihamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_nbr(unsigned int nb, int fd)
{
	char	arr[10];
	int		i;

	i = 0;
	while (nb)
	{
		arr[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
		write(fd, &arr[--i], 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	r;
	char			nbr;

	if (fd < 0)
		return ;
	if (nb < 0)
	{
		write(fd, "-", 1);
		r = nb * -1;
	}
	else
		r = nb;
	if (r < 10)
	{
		nbr = r + '0';
		write(fd, &nbr, 1);
	}
	else
	{
		print_nbr(r, fd);
	}
}
