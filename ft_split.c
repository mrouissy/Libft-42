/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:28:44 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/04 01:10:44 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *str1, int sep)
{
	char	*ptr;
	size_t	i;
	size_t	words;
	int		in;

	i = 0;
	in = 0;
	words = 0;
	ptr = (char *)str1;
	while (str1[i])
	{
		if (!in && ptr[i] != sep)
		{
			in = 1;
			words++;
		}
		else if (ptr[i] == sep)
		{
			in = 0;
		}
		i++;
	}
	return (words);
}

static char	*cut(const char *str, size_t start, size_t end)
{
	char	*word;
	size_t	len;

	len = end - start + 1;
	word = malloc(len);
	if (!word)
		return (0);
	ft_strlcpy(word, str + start, len);
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	part;
	char	**res;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = 0;
	i = 0;
	part = count(s, c);
	res = malloc((part + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (s[end])
	{
		if (s[end] == c)
		{
			if (end > start)
			{
				res[i] = cut(s, start, end);
				if (!res[i++])
					return (0);
			}
			start = end + 1;
		}
		end++;
	}
	if (end > start)
	{
		res[i] = cut(s, start, end);
		if (!res[i++])
			return (0);
	}
	res[i] = 0;
	return (res);
}

