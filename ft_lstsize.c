/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:40:36 by svilaca-          #+#    #+#             */
/*   Updated: 2022/12/02 15:54:01 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst -> next;
	}
	return (size);
}

// int	main(void)
// {
// 	t_list	*mylist;
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
// 	return (0);
// }