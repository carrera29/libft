/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:56:46 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/06 09:53:00 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: 
- la dirección de un puntero al primer nodo de una lista.
- new: un puntero al nodo que añadir al principio de la lista.
Valor devuelto: Nada
Funciones autorizadas: Ninguna
Descripción:
Añade el nodo ’new’ al principio de la lista ’lst’.
*/
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	char	str[] = "Lulu";
	char	str2[] = "Hola";

	t_list	*primero;
	t_list	*new;
	t_list	**lst;

	primero = ft_lstnew(str);
	new = ft_lstnew(str2);
	lst = &primero;

	ft_lstadd_front(lst, new);
	t_list *begin = *lst;

	printf("%s\n", begin->content);
	printf("%s\n", begin->next->content);
}*/
