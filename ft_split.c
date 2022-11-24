/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:52:58 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/22 17:31:51 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	int		i;
	size_t	wd;

	i = 0;
	wd = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wd++;
		i++;
	}
	return (wd);
}

static void	str_malloc(char **arr, char const *s, char c, size_t wd)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] && wd > 0)
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				j++;
				i++;
			}
			*arr = ft_substr(s, i - j, j);
			arr++;
			wd--;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	wd;

	wd = word_count(s, c);
	arr = (char **)malloc((wd + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	str_malloc(arr, s, c, wd);
	arr[wd] = NULL;
	return (arr);
}
