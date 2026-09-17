/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrscount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 03:47:04 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/17 02:45:32 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_chrscount(char *str, int c)
{
	unsigned int	chars;
	unsigned int	i;

	if (!str)
		return (NULL);
	chars = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			chars++;
		i++;
	}
	return (chars);
}
