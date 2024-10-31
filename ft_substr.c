/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:08:47 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/30 15:13:43 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (len == 0 || ft_strlen(s) <= 0)
		return (0);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s + start, len);
	return (ptr);
}
