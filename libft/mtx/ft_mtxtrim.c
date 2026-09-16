/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 01:27:26 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 03:03:05 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_mtxtrim(char const **mtx, char const **set)
{
	char	**mtx2;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!set || !mtx)
		return (NULL);
	while (mtx[start] && ft_mtxstr(set, mtx[start]))
		start++;
	end = ft_mtxlen(mtx);
	while (end > start && ft_mtxstr(set, mtx[end - 1]))
		end--;
	len = end - start;
	mtx2 = malloc((len + 1) * (sizeof (char *)));
	if (!mtx2)
		return (NULL);
	end = -1;
	while (++end < len)
	{
		mtx2[end] = ft_strdup(mtx[start + end]);
		if (!mtx2[end])
			return (ft_mtxfree(mtx2), NULL);
	}
	mtx2[len] = NULL;
	return (mtx2);
}
