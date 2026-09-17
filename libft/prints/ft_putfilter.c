/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 04:09:13 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/17 02:46:29 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putfilter(char *text, char *filter, char filter_char)
{
	int i;
	int j;
	int len;

	i = 0;
	len = ft_strlen(filter);
	while (text[i])
	{
		j = 0;
		while (filter[j] == text[i + j] && filter[j])
			j++;
		if (j == len)
		{
			while (j > 0)
			{
				write(1, &filter_char, 1);
				j--;
			}
			i = i + len;
			continue;
		}
		else
			write(1, &text[i], 1);
		i++;
	}
}
