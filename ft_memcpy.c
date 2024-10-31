/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:50:07 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/30 13:51:08 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*bufd;
	size_t			i;
	unsigned char	*bufs;

	i = 0;
	bufd = (unsigned char *)dest;
	bufs = (unsigned char *)src;
	while (bufs[i] && i <= n)
	{
		bufd[i] = bufs[i];
		i++;
	}
	bufd[i] = '\0';
	return (dest);
}
