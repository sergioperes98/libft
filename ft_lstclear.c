/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:14:49 by svilaca-          #+#    #+#             */
/*   Updated: 2022/12/02 18:34:37 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_delete;

	while (*lst)
	{
		to_delete = *lst;
		*lst = (*lst)-> next;
		ft_lstdelone(to_delete, del);
	}
	*lst = NULL;
}
