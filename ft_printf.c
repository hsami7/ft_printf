/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:57:53 by hsami             #+#    #+#             */
/*   Updated: 2023/06/30 18:36:02 by hsami            ###   ########.fr       */
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
		len += print_string(list);
	}
	else if (c == 'c')
	{
		len += print_char(list);
	}

	else if (c == 'p')
	{
		len += print_pointer(list);
	}
	else if (c == 'd' || c == 'i')
	{
		len += print_intiger(list);
	}
	else if (c == 'u')
	{
		len += print_unsigned(list);
	}
	else if (c == 'x')
	{
		len += print_lowerhexa(list);
	}
	else if (c == 'X')
	{
		len += print_upperhexa(list);
	}
	else if (c == '%')
	{
		len += print_percent();
	}
	return (len);
}

int ft_printf(const char *format, ...)
{
	size_t i;
	size_t len;
	va_list list;

	i = 0;
	len = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			len++;
		}
		else
		{
			i++;
			len += percent_cases(list, format[i]);
		}
		i++;
	}
	va_end(list);
	return (len);
}
