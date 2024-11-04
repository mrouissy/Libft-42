/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:54:32 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/04 00:27:15 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str1, size_t n)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str1[i] && str[i] == str1[i] && i < n)
		i++;
	if(n == i)
		return (0);
	return ((unsigned char)str[i] - (unsigned char)str1[i]);
}
