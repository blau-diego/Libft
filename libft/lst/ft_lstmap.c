/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 20:20:48 by dierojas          #+#    #+#             */
/*   Updated: 2025/11/28 21:58:49 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_aux(t_list **head, t_list *node, t_list **tail);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	void	*new_content;
	t_list	*node;

	if (!f || !del)
		return (NULL);
	head = NULL;
	tail = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_lstclear(&head, del), NULL);
		node = malloc(sizeof(t_list));
		if (!node)
			return (del(new_content), ft_lstclear(&head, del), NULL);
		node->content = new_content;
		node->next = NULL;
		ft_aux(&head, node, &tail);
		lst = lst->next;
	}
	return (head);
}

static void	ft_aux(t_list **head, t_list *node, t_list **tail)
{
	if (!*head)
	{
		*head = node;
		*tail = node;
	}
	else
	{
		(*tail)->next = node;
		*tail = node;
	}
}
