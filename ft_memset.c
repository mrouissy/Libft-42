/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:07:50 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/31 09:30:41 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)str;
	while (i < n)
	{
		buf[i++] = (unsigned char)c;
	}
	return (str);
}
