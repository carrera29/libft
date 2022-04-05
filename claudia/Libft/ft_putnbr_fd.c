/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:18:47 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/30 15:30:44 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Escribe el número ’n’ al file descriptor dado.
#1. El número ’n’ a escribir.
#2. El file descriptor sobre el que escribir.
Valor devuelto: Nada
Funciones autorizadas: write
*/
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			n = (n % 10);
		}
		if (n < 10 && n >= 0)
		{
			n = n + 48;
			write (fd, &n, 1);
		}
	}
}
/*
int main(void)
{
	ft_putnbr_fd(-2147483648);
	return (0);
}*/
