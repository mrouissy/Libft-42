/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:54:32 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/29 09:57:57 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str1, size_t n)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] == str1[i] && i < n - 1)
		i++;
	if (str[i] && str[i] != str1[i])
		return (str[i] - str1[i]);
	return (0);
}
