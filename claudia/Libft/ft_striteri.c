/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:50:43 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/30 13:45:04 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Aplica la función ’f’ a cada caracter de la string
dada como argumento, pasando su índice como primer argumento. 
Cada caracter se pasa como una dirección a ’f’, 
por si hace falta modificarlo.
#1. La string que iterar.
#2. La función a aplicar a cada caracter.
Valor devuelto: Nada
Funciones autorizadas: Ninguna
*/
#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	*f(unsigned int i, char *s)
{
	s = 65 + i;
}

int	main(void)
{
	char	s[] = "hola";
	int i;

	i = 0;
	ft_striteri(s, *f(i, s));
	printf("%s\n", s);
	return(0);
}*/
