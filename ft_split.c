/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:52:58 by svilaca-          #+#    #+#             */
/*   Updated: 2022/11/16 22:02:39 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   word_count(char const *s, char c)
{
    int     i;
    size_t  wd;

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

char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t  wd;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    wd = word_count(s, c);
    arr = (char **)malloc((wd + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    while (s[i])
    {
        while (s[i + j] != c)
        {
            j++;
            if (s[j] == c)
            {
                *
            }
        }
    }i++;
}

int main(void)
{
    char    **arr;
    size_t  i;

    arr = ft_split("Ola/42/Sou/Eu", '/');
    while (i < 5)
    {
        printf("%s\n", arr[i]);
        i++;
    }
    return (0);
}

/*int main(void)
{
    printf("%ld", word_count("//Ola//42/Sou/Eu", '/'));
    return (0);
}*/