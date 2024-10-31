/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:51:13 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/30 22:13:23 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	if (!s1)
		return(0);
	if(!set)
		return(ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1)-1;
	while (s1[start] && ft_strchr(set,s1[start]))
		start++;
	while (end > start && ft_strchr(set,s1[end]))
		end--;
	ptr = (char *) malloc((end - start +2)*sizeof(char));
	if(!ptr)
		return(0);
	ft_strlcpy(ptr,s1+start,end - start+1);
	return(ptr);
}