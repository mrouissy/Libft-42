/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:15:18 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/04 00:42:34 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	j;
	size_t	i;
	char	*big;
	char	*find;

	i = 0;
	j = 0;
	big = (char *)str;
	find = (char *)tofind;
	if (!find[j])
		return (big);
	while (big[i] && i <= len)
	{
		j = 0;
		while (big[i + j] == find[j] && big[i + j] && (i + j) < len)
			j++;
		if (!find[j])
			return (big + i);

		i++;
	}
	return (0);
}
