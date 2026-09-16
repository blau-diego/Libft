/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startwith.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 03:35:36 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 03:45:28 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_startwith(char *str, char *prefix)
{
	int	i;
	int	j;

	if (!str || ft_strlen(prefix) > ft_strlen(str))
		return (-1);
	i = ft_strlen(prefix);
	j = 0;
	while(i >= 0)
	{
		if (str[j] != prefix[j])
			return (FALSE);
		i--;
		j++;
	}
	return (TRUE);
}
