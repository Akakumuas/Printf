/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:59:05 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 02:07:15 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save_lst;

	if (*lst)
	{
		while (*lst)
		{
			save_lst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = save_lst;
		}
		*lst = 0;
	}
}
