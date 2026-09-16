/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 01:22:44 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 01:22:55 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_mtxnew(size_t size)
{
	char	**mtx;

	mtx = malloc((size + 1) * sizeof(char *));
	if (!mtx)
		return (NULL);
	mtx[size] = NULL;
	return (mtx);
}
