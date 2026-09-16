/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 01:49:58 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/15 02:10:13 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old, size_t new)
{
	char	*tmp;
	size_t	true_size;

	if (!ptr || new <= 0)
		return NULL;
	tmp = malloc(new);
	if (!tmp)
		return (NULL);
	if (old < new)
		true_size = old;
	else
		true_size = new;
	ft_memcpy(tmp, ptr, true_size);
	free(ptr);
	return (tmp);
}
