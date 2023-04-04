/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:53:07 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/07 14:36:49 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Escribe la string ’s’ en el file descriptor indicado.
#1. La string que imprimir.
#2. El file descriptor sobre el que escribir.
Valor devuelto: Nada
Funciones autorizadas: write
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}
