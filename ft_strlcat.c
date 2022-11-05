/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:55:02 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/04 21:51:20 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = dstlen;
	if (!size)
		return (srclen);
	if (size <= dstlen)
		return (srclen + size);
	while (src[i] && i < (size - dstlen - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
