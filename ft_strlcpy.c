/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:28:39 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/31 14:10:32 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sdest)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
	{
		return (0);
	}

	if (dest)
	{
		while (src[i] && i < sdest - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (i > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
