/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:57:25 by svilaca-          #+#    #+#             */
/*   Updated: 2022/12/02 16:30:16 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*mylist;
// 	t_list	*last;
// 	t_list	new;
// 	t_list	new2;
// 	int		nbr;
// 	int		nbr2;
// 	int		nbr3;
// 	int		size;

// 	nbr = 42;
// 	nbr2 = 24;
// 	nbr3 = 53;
// 	new.content = &nbr2;
// 	new2.content = &nbr3;
// 	mylist = ft_lstnew(&nbr);
// 	ft_lstadd_front(&mylist, &new);
// 	ft_lstadd_front(&mylist, &new2);
// 	size = ft_lstsize(mylist);
// 	printf("%d", size);
// 	last = ft_lstlast(mylist);
// 	return (0);
// }