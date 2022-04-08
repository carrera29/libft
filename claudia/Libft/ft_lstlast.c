/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:50:54 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/07 09:42:15 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: el principio de la lista.
Valor devuelto: Último nodo de la lista.
Funciones autorizadas: Ninguna
Descripción: Devuelve el último nodo de la lista.
*/
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{	
	t_list	*aux;

	aux = lst;
	if (!lst)
		return (0);
	while (aux->next)
		aux = aux->next;
	return (aux);
}
/*
int	main(void)
{
	struct s_list	*lst;
	struct s_list	primero;
	struct s_list	segundo;
	struct s_list	tercero;

	lst = &primero;
	primero.next = &segundo;
	segundo.next = &tercero;
	tercero.next = 0;
	primero->content = "hola";
	segundo->content = "conejo";
	tercero->content = "blanco";
	printf("%s\n", ft_lstlast(lst));
	return (0);
}*/
