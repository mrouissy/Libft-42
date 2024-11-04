/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:00:25 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/04 00:11:09 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	unsigned char	*buf1;
	unsigned char	*buf2;
	size_t			i;

	buf1 = (unsigned char *)str1;
	buf2 = (unsigned char *)str2;
	i = 0;
	while (i < size)
	{
		if (buf1[i] != buf2[i])
			return buf1[i] - buf2[i];
		i++;
	}
	return (0);
}
