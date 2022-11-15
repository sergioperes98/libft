/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:46:43 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/15 22:39:07 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	malloc_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	if (i == len)
		return (0);
	while (is_in_set(s1[len - 1], set))
		len--;
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = 0;
	j = 0;
	len = malloc_size(s1, set);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (j < len)
	{
		str[j] = s1[i + j];
		j++;
	}
	str[len] = '\0';
	return (str);
}
