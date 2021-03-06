/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:19:03 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/08 08:51:02 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: 
- el nodo a liberar.
- del: un puntero a la función utilizada 
    para liberar el contenido del nodo.
Valor devuelto: Nada
Funciones autorizadas: free
Descripción: 
Toma como parámetro un nodo ’lst’ y libera la
memoria del contenido utilizando la función ’del’
dada como parámetro, además de liberar el nodo. 
La memoria de ’next’ no debe liberarse.
*/
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
