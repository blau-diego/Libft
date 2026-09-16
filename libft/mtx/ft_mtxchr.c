/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 02:28:45 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 02:35:17 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_mtxchr(char **mtx, int c)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (mtx[++i])
	{
		j = -1;
		while (mtx[i][++j])
		{
			if ((unsigned char)mtx[i][j] == (unsigned char)c)
				return (&mtx[i][j]);
		}
	}
	return (NULL);
}
