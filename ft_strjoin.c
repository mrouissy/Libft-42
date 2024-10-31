/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:03:45 by mrouissy          #+#    #+#             */
/*   Updated: 2024/10/31 09:17:53 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);

	if(!s1 && !s2)
		return (0);

	if(s1 && !s2 )
		return(ft_strdup(s1));

	if(!s1 && s2)
		return(ft_strdup(s2));

	ptr = (char *) malloc(len_s1 +len_s2 +1);

	if(!ptr)
		return(0);

	ft_strlcpy(ptr,s1,len_s1);
	ft_strlcat(ptr,s2,len_s1 +len_s2 +1);
	
	return(ptr);
}
