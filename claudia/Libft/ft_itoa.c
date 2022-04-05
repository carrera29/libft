/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:23:39 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/31 09:21:48 by clcarre          ###   ########.fr       */
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
	if (n < 0)
		i++;
	else if (n == 0)
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
	int				c;
	unsigned int	i;

	i = ft_contador(n);
	str = malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (0);
	if (n < 0)
		c = -n;
	else
		c = n;
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i] = c % 10 + 48;
		c = c / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-1056));
	return (0);
}*/
