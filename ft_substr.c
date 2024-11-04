/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:08:47 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/04 00:58:23 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *subst;
    size_t size;

    if (!s)
        return NULL;
    if (start >= ft_strlen(s))
        return ft_strdup("");
    size = ft_strlen(s) - start;
    if (size < len)
        len = size;
    subst = (char *)malloc(len + 1);
    if (!subst)
        return NULL;
    ft_strlcpy(subst, s + start, len + 1);
    return subst;
}
