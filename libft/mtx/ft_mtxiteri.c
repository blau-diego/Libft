/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxiteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 00:56:57 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 02:09:56 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_mtxiteri(char **mtx, void (*function)(unsigned int, char **))
{
	unsigned int	i;

	if(!mtx || !function)
		return ;
	i = -1;
	while (mtx[++i])
		function(i, &mtx[i]);
}
