/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 02:12:56 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 02:15:29 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (-1);
	i = 0;
	while (s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    printf("%d\n", ft_strcmp("Abls", "l"));
    printf("%d\n", ft_strcmp("Abls", "s"));
    printf("%d\n", ft_strcmp("Abls", "O"));
    printf("%d\n", strcmp("Abhhhls", "l"));
    printf("%d\n", strcmp("Abljbjbjs", "s"));
    printf("%d\n", strcmp("Abls", "O"));
	printf("%d\n", strcmp("Abls", "\0"));
	printf("%d\n", strcmp("\0", "sss"));

	return 0;
}
 */
