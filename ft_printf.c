/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:57:53 by hsami             #+#    #+#             */
/*   Updated: 2023/06/18 19:01:48 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	percent_cases(va_list list, const char c)
{
	int	len;

	len = 0;
	if (c == 's')
	{
		len = print_string(list);
		len++;
	}
	if (c == 'c')
	{
		len = print_char(list);
		len++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	len;
	va_list	list;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		else
		{
			i++;
			len = percent_cases(list, str[i]);
			len++;
		}
		i++;
	}
	va_end(list);
	return (len);
}
