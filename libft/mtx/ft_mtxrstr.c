/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 03:28:44 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 03:30:09 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_mtxrstr(const char **mtx, char *str)
{
	unsigned int	i;

	if (!mtx)
		return (NULL);
	i = ft_mtxlen(mtx);
	while (i >= 0)
	{
		if (ft_strcmp(mtx[i], str) == 0)
			return (mtx[i]);
		i--;
	}
	return (NULL);
}
