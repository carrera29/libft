/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:56:45 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/04 16:54:04 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros content: el contenido con el que crear el nodo.
Valor devuelto: El nuevo nodo
Funciones autorizadas: malloc
Descripción:
Crea un nuevo nodo utilizando malloc(3). 
La variable miembro ’content’ se inicializa con el
contenido del parámetro ’content’. 
La variable ’next’, con NULL.
*/
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*mi_lista;

	mi_lista = (t_list *)malloc(sizeof(*mi_lista));
	if (!mi_lista)
		return (0);
	mi_lista->content = content;
	mi_lista->next = NULL;
	return (mi_lista);
}
