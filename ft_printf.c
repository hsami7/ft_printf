/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:57:53 by hsami             #+#    #+#             */
/*   Updated: 2023/06/30 16:02:23 by hsami            ###   ########.fr       */
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
	else if (c == 'c')
	{
		len = print_char(list);
		len++;
	}

	else if (c == 'p')
	{
		len = print_pointer(list);
		len++;
	}
	else if (c == 'd' || c == 'i')
	{
		len = print_intiger(list);
		len++;
	}
	else if (c == 'u')
	{
		len = print_unsigned(list);
		len++;
	}
	else if (c == 'x')
	{
		len = print_lowerhexa(list);
		len++;
	}
	else if (c == 'X')
	{
		len = print_upperhexa(list);
		len++;
	}
	else if (c == '%')
	{
		len = print_percent();
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
