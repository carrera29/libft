/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:23:39 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/07 17:07:48 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Reserva con malloc(3) y devuelve una string que
representa el número dado como argumento. 
Los números negativos deben gestionarse correctamente.
Valor devuelto:
- La string que represente el número. 
- NULL si falla la reserva.
Funciones autorizadas: malloc
*/
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_contador(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	aux;

	i = ft_contador(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	if (n < 0)
		aux = -n;
	else
		aux = n;
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i--] = aux % 10 + 48;
		aux /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-623));
	return (0);
}*/
