/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 03:21:36 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 03:25:28 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_mtxrchr(char **mtx, int c)
{
	int	i;
	int	j;

	if (!mtx)
		return (NULL);
	i = ft_mtxlen(mtx);
	while (i >= 0)
	{
		j = ft_strlen(mtx[i]);
		while (j >= 0)
		{
			if ((unsigned char)mtx[i][j] == (unsigned char)c)
				return (&mtx[i][j]);
			j--;
		}
		i--;
	}
	return (NULL);
}
