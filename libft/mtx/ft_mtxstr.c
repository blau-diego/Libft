/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 01:29:10 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 02:15:24 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_mtxstr(const char **mtx, char *str)
{
	unsigned int	i;

	if (!mtx)
		return (NULL);
	i = 0;
	while (mtx[i])
	{
		if (ft_strcmp(mtx[i], str) == 0)
			return (mtx[i]);
		i++;
	}
	return (NULL);
}
