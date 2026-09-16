/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_submtx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 01:08:35 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 02:53:25 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_submtx(char **mtx, unsigned int start, size_t len)
{
	size_t	i;
	size_t	mtx_len;
	char	**sub_mtx;

	if (!mtx)
		return (NULL);
	mtx_len = ft_mtxlen((char **)mtx);
	if (start >= mtx_len)
		return (ft_mtxnew(0));
	if (len > mtx_len - start)
		len = mtx_len - start;
	sub_mtx = malloc((len + 1) * sizeof(char *));
	if (!sub_mtx)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		sub_mtx[i] = ft_strdup(mtx[start + i]);
		if (!sub_mtx[i])
			return (ft_mtxfree(mtx), NULL);
	}
	sub_mtx[i] = NULL;
	return (sub_mtx);
}
