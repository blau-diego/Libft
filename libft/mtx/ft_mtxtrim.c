/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 01:27:26 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/17 03:14:36 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_mtxtrim_limits(char **mtx, char **set,
				size_t *start, size_t *end);

char	**ft_mtxtrim(char **mtx, char **set)
{
	char	**mtx2;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!mtx || !set)
		return (NULL);
	ft_mtxtrim_limits(mtx, set, &start, &end);
	mtx2 = malloc((end - start + 1) * sizeof(*mtx2));
	if (!mtx2)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		mtx2[i] = ft_strdup(mtx[start + i]);
		if (!mtx2[i])
			return (ft_mtxfree(mtx2), NULL);
		i++;
	}
	mtx2[i] = NULL;
	return (mtx2);
}

static void	ft_mtxtrim_limits(char **mtx, char **set,
							size_t *start, size_t *end)
{
	*start = 0;
	while (mtx[*start] && ft_mtxstr(set, mtx[*start]))
		(*start)++;
	*end = ft_mtxlen(mtx);
	while (*end > *start && ft_mtxstr(set, mtx[*end - 1]))
		(*end)--;
}
