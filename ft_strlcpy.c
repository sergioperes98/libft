/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:19:58 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/03 19:29:19 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	
	i = 0;
	while (src)
		i++;
	i = 0;
	while (src || size)
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}

int	main(void)
{
	
}