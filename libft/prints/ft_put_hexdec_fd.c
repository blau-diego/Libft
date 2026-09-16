/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexdec_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 01:28:02 by dierojas          #+#    #+#             */
/*   Updated: 2025/11/28 23:08:20 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_put_hexdec_fd(unsigned long long nb, int bool, int fd)
{
	char	minh;
	char	maxh;

	minh = "0123456789abcdef"[nb % 16];
	maxh = "0123456789ABCDEF" [nb % 16];
	if (nb >= 16)
		ft_put_hexdec_fd(nb / 16, bool, fd);
	if (!bool)
		ft_putchar_fd(minh, fd);
	else
		ft_putchar_fd(maxh, fd);
}
