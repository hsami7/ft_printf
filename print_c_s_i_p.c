/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_s_i_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:19:42 by hsami             #+#    #+#             */
/*   Updated: 2023/07/18 19:11:21 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	print_char(va_list list)
{
	char	c;

	c = va_arg(list, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	print_string(va_list list)
{
	char	*str;
	size_t	strlen;

	str = va_arg(list, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	else
	{
		strlen = ft_strlen(str);
		ft_putstr_fd(str, 1);
		return (strlen);
	}
}

int	print_intiger(va_list list)
{
	int		intiger;
	size_t	len;

	intiger = va_arg(list, int);
	len = long_len((long) intiger);
	ft_putnbr_fd(intiger, 1);
	return (len);
}

int	print_pointer(va_list list)
{
	unsigned long	n;

	n = va_arg(list, unsigned long);
	if (n == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	return (ft_print_nbr(n, 87, 16) + 2);
}
