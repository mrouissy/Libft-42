/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:03:35 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/03 22:20:23 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)str;
	i = 0;
	while (i < n - 1)
	{
		if (buf[i] == c)
			return (&buf[i]);
		i++;
	}
	return (0);
}
