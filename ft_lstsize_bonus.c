/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:15:48 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/05 13:22:54 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*buf;

	buf = lst;
	i = 0;
	while(buf)
	{
		i++;
		buf = buf->next;
	}
	return (i);
}
