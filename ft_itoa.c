/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:35:08 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/03 13:41:21 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t	len;

	if (n > 0)
	{
		len = 0;
		while (n > 0)
		{
			n /= 10;
			len++;
		}
	}
	return (len);
}

static char	*alloc(size_t len)
{
	char	*ptr;

	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	return (ptr);
}

static char	*ifpos(int n, size_t memlen, char sign)
{
	char	*res;
	size_t	len;
	int		num;

	len = memlen;
	res = alloc(len);
	res[len] = '\0';
	num = n;
	while (len > 0)
	{
		res[--len] = num % 10 + '0';
		num /= 10;
	}
	if (sign == '-')
		res[0] = '-';
	return (res);
}

static char	*ifneg(int n)
{
	char	*res;
	int		posn;

	posn = n * (-1);
	res = ifpos(posn, intlen(posn) + 1, '-');
	return (res);
}

char	*ft_itoa(int n)
{
	char	*ptr;

	if (n == -2147483648)
	{
		ptr = alloc(11);
		ptr = "-2147483648";
		return (ptr);
	}
	else if (n > 0)
	{
		ptr = ifpos(n, intlen(n), '+');
	}
	else if (n == 0)
	{
		ptr = malloc(2);
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	else if (n < 0)
	{
		ptr = ifneg(n);
	}
	return (ptr);
}
