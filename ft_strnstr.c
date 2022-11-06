/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 02:51:01 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/06 07:29:39 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	const char	*ptr1;
	const char	*ptr2;

	i = 0;
	while (i < len)
	{
		ptr1 = big;
		ptr2 = little;
		while (*ptr1 == *ptr2)
		{
			if (! *ptr2)
				return ((char *)big);
			ptr1++;
			ptr2++;
		}
		big++;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	// const char	big[] = "Ol42SouuuOla423Eu";
	// const char	little[] = "uOla423Eu";

	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 30));
	return (0);
}