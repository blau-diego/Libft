/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:53:22 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/16 03:18:32 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_aux_printf(const char *s, va_list args);

int	ft_printf(char const *s, ...)
{
	va_list	args;
	size_t	i;
	int		char_count;

	va_start(args, s);
	i = 0;
	char_count = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			char_count += ft_aux_printf(&s[i], args);
		}
		else
			char_count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}

int	ft_aux_printf(const char *s, va_list args)
{
	int		char_count;
	size_t	i;

	i = 0;
	char_count = 0;
	if (s[i] == 'c')
		char_count += ft_putchar_aux(args);
	else if (s[i] == '%')
		char_count += ft_putchar('%');
	else if (s[i] == 's')
		char_count = ft_putstr_aux(args);
	else if (s[i] == 'd' || s[i] == 'i' || s[i] == 'u')
		char_count += ft_putnbr_aux(s, args);
	else if (s[i] == 'p')
		char_count += ft_pointer_aux(args);
	else if (s[i] == 'x' || s[i] == 'X')
		char_count += ft_hexdec_aux(s, args);
	else
		char_count += ft_putstr("(null)");
	return (char_count);
}
