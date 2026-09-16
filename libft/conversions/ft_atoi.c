/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:56:51 by dierojas          #+#    #+#             */
/*   Updated: 2025/11/28 23:07:00 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	long	n;
	long	sign;
	int		i;

	if (!str)
		return (0);
	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		if (n > INT_MAX || n < INT_MIN)
			return ((int)0);
		i++;
	}
	return ((int)(n * sign));
}
/* 
#include <stdio.h>
#include <string.h>

int main ()
{
    char s[] = "1234";

    printf("%i\n", atoi(s));
    printf("%i\n", ft_atoi(s));
	printf("%i\n", ft_atoi(""));
	
}
 */
