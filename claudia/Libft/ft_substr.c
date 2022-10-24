/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:23:01 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/04 10:32:50 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reserva con malloc(3) memoria para devolver una string nueva 
basada en la string ’s’. La nueva string empieza en el índice ’start’ 
y tiene una longitud máxima ’len’.
Valor devuelto: 
- La nueva string. 
- NULL si la reserva de memoria falla.
Funciones autorizadas: malloc
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i] && i < len && start < ft_strlen(s))
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
