/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:15:36 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/15 22:39:52 by svilaca-         ###   ########.fr       */
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
