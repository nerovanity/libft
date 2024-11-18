/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihamani <ihamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:37:41 by ihamani           #+#    #+#             */
/*   Updated: 2024/11/16 10:44:43 by ihamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*nt;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	head = *lst;
	while (head)
	{
		nt = head->next;
		del(head->content);
		free(head);
		head = nt;
	}
	*lst = NULL;
}
