/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:56:45 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:34:03 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
