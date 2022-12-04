/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:52:58 by svilaca-          #+#    #+#             */
/*   Updated: 2022/12/04 20:16:48 by svilaca-         ###   ########.fr       */
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

static size_t	string_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	wd;
	size_t	j;
	size_t	i;

	j = -1;
	i = 0;
	wd = word_count(s, c);
	arr = (char **)malloc((wd + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (++j < wd)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			arr[j] = ft_substr(s, i, string_len(&s[i], c));
		while (s[i] && s[i] != c)
			i++;
	}
	arr[wd] = NULL;
	return (arr);
}

// int	main(void)
// {
// 	char const	*s = "ololl lll";
// 	char		**arr = ft_split(s, ' ');
// 	while (*arr)
// 	{
// 		printf("%s\n", *arr);
// 		arr++;
// 	}
// 	return (0);
// }