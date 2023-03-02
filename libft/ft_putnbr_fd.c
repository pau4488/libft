/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:25:31 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/03/02 21:29:17 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
	

	// int		ncpy;

	// ncpy = n;
	// if (ncpy < 0)
	// {
	// 	ft_putchar_fd ('-', fd);
	// 	ncpy = -ncpy;
	// }
	// if (ncpy > 9)
	// {
	// 	ft_putnbr_fd (ncpy / 10, fd);
	// 	ft_putchar_fd (ncpy % 10 + '0', fd);
	// }
	// else
	// 	ft_putchar_fd (ncpy + '0', fd);
}
