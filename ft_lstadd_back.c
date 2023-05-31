/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:18:14 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:32:42 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
