/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:15:36 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/06 02:09:21 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (1)
	{
		if (*s == (unsigned char) c)
			aux = (char *) s;
		if (*s == 0)
			break ;
		s++;
	}
	return (aux);
}

/*int	main(void)
{
	char	str[] = "Ola42So4uEu";
	int		c = '4';

	printf("(%s)", ft_strchr_1(str, c));
	printf("\n(%s)", strchr(str, c));
	return (0);
}*/