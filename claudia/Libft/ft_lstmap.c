/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:08:33 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/08 11:30:30 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: 
- un puntero a un nodo.
- f: la dirección de un puntero a una función usada
    en la iteración de cada elemento de la lista.
- del: un puntero a función utilizado para eliminar
    el contenido de un nodo, si es necesario.
Valor devuelto:
- La nueva lista.
- NULL si falla la reserva de memoria.
Funciones autorizadas: malloc, free
Descripción:
Itera la lista ’lst’ y aplica la función ’f’ 
al contenido de cada nodo. 
Crea una lista resultante de la aplicación correcta 
y sucesiva de la función ’f’ sobre cada nodo. 
La función ’del’ se utiliza para eliminar el contenido de un nodo,
si hace falta.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*aux;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		aux = ft_lstnew((*f)(lst->content));
		if (!aux)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, aux);
	}
	return (new_lst);
}
