/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:11:47 by svilaca-          #+#    #+#             */
/*   Updated: 2023/02/16 14:41:13 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}

// int	main(void)
// {
// 	t_list	*mylist;
// 	t_list	*last;
// 	t_list	new;
// 	t_list	new2;
// 	t_list	new3;
// 	int		nbr;
// 	int		nbr2;
// 	int		nbr3;
// 	int		nbr4;
// 	int		size;

// 	nbr = 42;
// 	nbr2 = 24;
// 	nbr3 = 53;
// 	nbr4 = 36;
// 	new.content = &nbr2;
// 	new2.content = &nbr3;
// 	new3.content = &nbr4;
// 	mylist = ft_lstnew(&nbr);
// 	ft_lstadd_front(&mylist, &new);
// 	ft_lstadd_front(&mylist, &new2);
// 	size = ft_lstsize(mylist);
// 	printf("%d", size);
// 	last = ft_lstlast(mylist);
// 	ft_lstadd_back(&mylist, &new3);
// 	return (0);
// }