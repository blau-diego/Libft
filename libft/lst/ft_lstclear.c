/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:51:40 by dierojas          #+#    #+#             */
/*   Updated: 2025/11/28 20:05:05 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*aux;

	if (!lst || !del || !*lst)
		return ;
	node = *lst;
	while (node)
	{
		aux = node -> next;
		del(node -> content);
		free(node);
		node = aux;
	}
	*lst = NULL;
}
