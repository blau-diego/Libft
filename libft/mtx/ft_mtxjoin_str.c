/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:15:41 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/15 23:31:48 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_mtxjoin_str(char **mtx, char *s)
{
	char	**new_mtx;
	int		i;

	new_mtx = ft_calloc(ft_mtxlen(mtx) + 2, sizeof(char *));
	if (!new_mtx)
		return (NULL);
	i = -1;
	while (mtx[++i])
		new_mtx[i] = ft_strdup(mtx[i]);
	new_mtx[i] = ft_strdup(s);
	i++;
	new_mtx[i] = NULL;
	return (new_mtx);
}
