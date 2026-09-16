/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 02:07:15 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 02:20:34 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_mtxfree(char **mtx)
{
	int	i;

	if (!mtx)
		return ;
	i = 0;
	while (mtx[i])
	{
		if (mtx[i])
			free(mtx[i]);
		i++;
	}
	free(mtx);
}
