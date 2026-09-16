/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 01:27:24 by dierojas          #+#    #+#             */
/*   Updated: 2025/11/28 23:06:14 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_put_unsnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_put_unsnbr((n / 10));
	count += ft_putchar((n % 10) + '0');
	return (count);
}
