/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:07:18 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/30 22:23:59 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	d = ( char *)dest;
	s = ( char *)src;
	if(d == s)
		return(dest);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}
