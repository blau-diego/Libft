/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexdec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 01:28:02 by dierojas          #+#    #+#             */
/*   Updated: 2025/11/28 23:06:08 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_put_hexdec(unsigned long long nb, int m)
{
	char	minh;
	char	maxh;
	int		count;

	minh = "0123456789abcdef"[nb % 16];
	maxh = "0123456789ABCDEF" [nb % 16];
	count = 0;
	if (nb >= 16)
		count += ft_put_hexdec(nb / 16, m);
	if (!m)
		count += ft_putchar(minh);
	else
		count += ft_putchar(maxh);
	return (count);
}
