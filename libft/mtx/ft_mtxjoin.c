/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 23:14:15 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 02:19:42 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_mtxjoin(char **mtx1, char **mtx2)
{
	char	**mtx3;
	int 	i;
	int		j;

	mtx3 = malloc(ft_mtxlen(mtx1) + ft_mtxlen(mtx2) + 1 * sizeof(char *));
	if (!mtx3)
		return (NULL);
	i = -1;
	while(mtx1[++i])
	{
		mtx3[i] = ft_strdup(mtx1[i]);
		if (!mtx3[i])
			return (ft_mtxfree(mtx3), NULL);
	}
	j = 0;
	while(mtx2[j])
	{
		mtx3[i++] = ft_strdup(mtx2[j++]);
		if (!mtx3[i])
			return (ft_mtxfree(mtx3), NULL);
	}
	mtx3[i] = NULL;
	return (mtx3);
}
