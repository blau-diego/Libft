/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endwith.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 03:45:15 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 03:45:39 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_endwith(char *str, char *suffix)
{
	int	i;

	if (!str || ft_strlen(suffix) > ft_strlen(str))
		return (-1);
	i = ft_strlen(suffix);
	while(i >= 0)
	{
		if (str[i] != suffix[i])
			return (FALSE);
		i--;
	}
	return (TRUE);
}
