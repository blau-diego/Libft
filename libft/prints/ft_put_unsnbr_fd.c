/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 01:27:24 by dierojas          #+#    #+#             */
/*   Updated: 2025/11/28 23:08:24 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_put_unsnbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_put_unsnbr_fd((n / 10), fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
