/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:03:35 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/29 09:38:25 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)str;
	i = 0;
	while (buf[i] && i < n - 1)
	{
		if (buf[i] == c)
			return (&buf[i]);
		i++;
	}
	return (0);
}
