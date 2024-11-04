/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:45:01 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/04 00:50:17 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_alloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, size);
	return (ptr);
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	if (elementCount != 0 && elementSize != 0 && elementCount > (size_t)-1 / elementSize)
		return (0);
	return (ft_alloc(elementCount * elementSize));
}
