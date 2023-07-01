/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_s_i_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:19:42 by hsami             #+#    #+#             */
/*   Updated: 2023/07/01 17:19:56 by hsami            ###   ########.fr       */
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
		strlen = ft_strlen(str);
		ft_putstr_fd("(null)", 1);
		return (strlen);
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
	void			*point;
	char			*hexa;
	size_t			len;
	unsigned long	p_long;

	point = va_arg(list, void *);
	if (!point)
	{
		write(1, "0x0", 3);
		return (3);
	}
	p_long = (unsigned long) point;
	len = hexa_len(p_long) + 2;
	hexa = ft_int_to_hexa(p_long);
	write(1, "0x", 2);
	ft_putstr_fd(hexa, 1);
	free(hexa);
	return (len);
}
