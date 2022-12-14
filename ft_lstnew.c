/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:39:09 by svilaca-          #+#    #+#             */
/*   Updated: 2022/12/02 17:11:48 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list -> content = content;
	list -> next = NULL;
	return (list);
}

// int	main(void)
// {
// 	t_list	*mylist;
// 	int		nbr;

// 	nbr = 42;
// 	mylist = ft_lstnew(&nbr);
// 	return (0);
// }