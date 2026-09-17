/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 04:33:12 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 10:43:34 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memdup(void *src, size_t size)
{
	char			*dup;
	unsigned char	*tmp;
	int				i;

	i = 0;
	dup = malloc(sizeof(src) * size);
	if (!dup)
		return (NULL);
	tmp = (unsigned char *)src;
	while(i < size)
	{
		dup[i] = tmp[i];
		i++;
	}
	return (dup);
}
