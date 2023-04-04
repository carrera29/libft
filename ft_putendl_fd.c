/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:01:45 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/07 14:36:27 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Escribe la string ’s’ en el file descriptor indicado, 
seguido de un salto de línea.
#1. La string que escribir.
#2. El file descriptor sobre el que escribir.
Valor devuelto: Nada
Funciones autorizadas: write
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	ft_putendl_fd("hola");
// 	return (0);
// }
