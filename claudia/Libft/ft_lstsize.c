/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:58:23 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/06 10:58:09 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros lst: 
- el principio de la lista.
Valor devuelto: La longitud de la lista.
Funciones autorizadas: Ninguna
Descripción:
Cuenta el número de nodos de una lista.
*/
#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	printf("%d\n", ft_lstsize(lst));
	return (0);
}*/
