/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:15:18 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/29 15:09:39 by mrouissy         ###   ########.fr       */
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
	while (big[i] && i + j <= len)
	{
		while (big[i + j] == find[j] && big[i + j])
			j++;
		if (!find[j])
			return (big + i);
		j = 0;
		i++;
	}
	return (0);
}
