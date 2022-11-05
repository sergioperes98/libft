/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:57:27 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/04 23:55:25 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		i++;
	}
	if (c == '\0')
		return(0);
	return (NULL);
}

int	main(void)
{
	char	str[] = "Ola42\0SouEu";
	int		c = '\0';

	printf("%s\n", ft_strchr(str, c));
	//printf("%s", strchr(str, c));
	return (0);
}