/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:02:01 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/08 09:06:34 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: 
- un puntero al primer nodo.
- f: un puntero a la función que utilizará cada nodo.
Valor devuelto: Nada
Funciones autorizadas: Ninguna
Descripción:
Itera la lista ’lst’ y aplica la función ’f’ 
en el contenido de cada nodo.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
