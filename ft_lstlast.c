/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:50:54 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:33:45 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
