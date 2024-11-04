/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:26:56 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/04 00:19:06 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)str;
	while (buf[i])
	{
		if (buf[i] == (unsigned char)c)
		{
			return ((char *) str + i);
		}
			i++;
	}
	if(c == 0)
		return ((char *) str + i);
	return (0);
}
