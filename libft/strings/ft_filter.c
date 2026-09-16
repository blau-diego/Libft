/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 02:11:45 by dierojas          #+#    #+#             */
/*   Updated: 2026/09/15 04:09:34 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	aux_match_(char *text, char *filter, size_t pos);
static void	aux_fill_filter(char *tmp, size_t start,
				size_t len, char fil_char);

char	*ft_filter(char *text, char *filter, char fil_char)
{
	size_t	i;
	size_t	len;
	char	*tmp;

	len = ft_strlen(filter);
	tmp = malloc(ft_strlen(text) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (text[i])
	{
		if (len && aux_match(text, filter, i))
		{
			aux_fill_filter(tmp, i, len, fil_char);
			i += len;
		}
		else
			tmp[i] = text[i++];
	}
	tmp[i] = '\0';
	return (tmp);
}

static int	aux_match_(char *text, char *filter, size_t pos)
{
	size_t	i;

	i = 0;
	while (filter[i] && text[pos + i] == filter[i])
		i++;
	return (filter[i] == '\0');
}

static void	aux_fill_filter(char *tmp, size_t start,
				size_t len, char fil_char)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		tmp[start + i] = fil_char;
		i++;
	}
}
