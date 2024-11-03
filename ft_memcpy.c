/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:50:07 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/03 22:15:16 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*bufd;
	size_t				i;
	const unsigned char	*bufs;

	i = 0;
	bufd = (unsigned char *)dest;
	bufs = (const unsigned char *)src;
	while (i < n)
	{
		bufd[i] = bufs[i];
		i++;
	}
	return (dest);
}
