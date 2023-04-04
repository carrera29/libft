/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:18:14 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/07 11:48:14 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: 
- el puntero al primer nodo de una lista.
- new: el puntero a un nodo que añadir a la lista.
Valor devuelto: Nada
Funciones autorizadas: Ninguna
Descripción:
Añade el nodo ’new’ al final de la lista ’lst’.
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*aux;

	if (lst)
	{
		if (*lst)
		{
			aux = ft_lstlast(*lst);
			aux->next = new;
		}
		else
			*lst = new;
	}
}

// int	main(void)
// {
// 	char	str[] = "old";
// 	char	str1[] = "&";
// 	char	str2[] = "new";
// 	t_list	*primero;
// 	t_list	*segundo;
// 	t_list	*new;
// 	t_list	*begin;
// 	t_list	**lst;

// 	primero = ft_lstnew(str);
// 	segundo = ft_lstnew(str1);
// 	new = ft_lstnew(str2);
// 	lst = &primero;
// 	primero->next = &segundo;
// 	segundo->next = 0;
// 	ft_lstadd_back(lst, new);
// 	begin = *lst;
// 	printf("%s\n", primero->content);
// 	printf("%s\n", primero->next->content);
// 	printf("%s\n", primero->next->next->content);
// }
