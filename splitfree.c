#include "libft.h"

static size_t	count_words(const char *str, char sep)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != sep && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == sep)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*extract_word(const char *str, size_t start, size_t end)
{
	char	*word;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, str + start, end - start + 1);
	return (word);
}

static void	free_split(char **res, size_t i)
{
	while (i--)
		free(res[i]);
	free(res);
}

static int	add_word(char **res, const char *s, size_t start, size_t end, size_t *i)
{
	res[*i] = extract_word(s, start, end);
	if (!res[*i])
	{
		free_split(res, *i);
		return (0);
	}
	(*i)++;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	words_count;

	start = 0;
	end = 0;
	i = 0;
	words_count = count_words(s, c);
	result = malloc((words_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[end])
	{
		if (s[end] == c)
		{
			if (end > start && !add_word(result, s, start, end, &i))
				return (NULL);
			start = end + 1;
		}
		end++;
	}
	if (end > start && !add_word(result, s, start, end, &i))
		return (NULL);
	result[i] = NULL;
	return (result);
}
