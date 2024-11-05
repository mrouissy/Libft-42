/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:30:58 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/05 14:22:43 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if(n == -2147483648)
	{
		write(fd,"-2147483648",11);
	}
	else if(n < 0)
	{
		write(fd,"-",1);
		ft_putnbr_fd(-n,fd);
	}
	else if(n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(fd,&c,1);
	}

}
