/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:09:41 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/13 16:34:50 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	char	*dst;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	dst = malloc((size1 + size2 + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, size1 + 1);
	ft_strlcpy(&dst[size1], s2, size2 + 1);
	return (dst);
}
