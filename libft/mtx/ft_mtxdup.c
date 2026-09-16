/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 02:15:30 by dierojas          #+#    #+#             */
/*   Updated: 2026/04/04 02:17:42 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_mtxdup(char **mtx)
{
	char	**copy;
	int		i;

	i = 0;
	while (mtx[i])
		i++;
	copy = malloc(sizeof(char *) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (mtx[i])
	{
		copy[i] = ft_strdup(mtx[i]);
		if (!copy[i])
			return (ft_mtxfree(copy), NULL);
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
