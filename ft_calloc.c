/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:45:01 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/29 09:21:25 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_alloc(size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, size);
	return (ptr);
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	if (elementCount != 0 && ((size_t)-1 / elementSize) < elementCount)
		return (0);
	return (ft_alloc(elementCount * elementSize));
}
