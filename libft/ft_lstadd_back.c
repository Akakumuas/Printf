/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrinite <ctrinite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:45:58 by akakumas          #+#    #+#             */
/*   Updated: 2022/05/03 01:30:38 by ctrinite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*save_lst;

	if (new && lst)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		save_lst = ft_lstlast(*lst);
		save_lst->next = new;
	}
}
