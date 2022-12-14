/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:09:17 by svilaca-          #+#    #+#             */
/*   Updated: 2022/12/02 12:38:23 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*mylist;
// 	t_list	new;
// 	int		nbr;
// 	int		nbr2;

// 	nbr = 42;
// 	nbr2 = 24;
// 	new.content = &nbr2;
// 	mylist = ft_lstnew(&nbr);
// 	ft_lstadd_front(mylist, &new);
// 	return (0);
// }