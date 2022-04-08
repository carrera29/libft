/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:57:12 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/08 08:54:44 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: 
- la dirección de un puntero a un nodo.
- del: un puntero a función utilizado para eliminar
    el contenido de un nodo.
Valor devuelto: Nada
Funciones autorizadas: free
Descripción:
Elimina y libera el nodo ’lst’ dado y 
todos los consecutivos de ese nodo, 
utilizando la función ’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.
*/
#include "libft.h"
//#include "ft_lstdelone.c"
#include <stdlib.h>


void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = NULL;
}
