/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehrotr <amehrotr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:19:23 by hsami             #+#    #+#             */
/*   Updated: 2023/07/10 18:29:19 by amehrotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <limits.h>

int	percent_cases(va_list list, const char c)
{
	int	len;

	len = 0;
	if (c == 's')
		len += print_string(list);
	else if (c == 'c')
		len += print_char(list);
	else if (c == 'p')
		len += print_pointer(list);
	else if (c == 'd' || c == 'i')
		len += print_intiger(list);
	else if (c == 'u')
		len += print_unsigned(list);
	else if (c == 'x')
		len += print_lowerhexa(list);
	else if (c == 'X')
		len += print_upperhexa(list);
	else if (c == '%')
		len += print_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	len;
	va_list	list;

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

// int    main()
// {
// int a = 19;
//     printf("%d\n", 2147483647);
//     ft_printf("%d\n", 2147483647);
//     printf("%c\n", '#');
//     ft_printf("%c\n", '#');
//     printf("%s\n", "THIS IS MY STRING"); 
//     ft_printf("%s\n", "THIS IS MY STRING"); 
//     printf("%x\n", 15); 
//     ft_printf("%x\n", 15);
//     printf("%X\n", 15);
//     ft_printf("%X\n", 15);
//     printf("%d\n", a);
//     ft_printf("%d\n", a); 
//     printf("%%\n");
//      ft_printf("%%\n");
//     printf("%s\n", "hatim");
//     ft_printf("%s\n", "hatim");
//     printf("%u\n", -1);
//     ft_printf("%u\n", -1);
// 	printf("%x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//     ft_printf("%x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// }
