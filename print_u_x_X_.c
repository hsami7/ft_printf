/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_x_X_%.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:25:56 by hsami             #+#    #+#             */
/*   Updated: 2023/06/23 16:22:56 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	print_unsigned(va_list list)
{
	unsigned int	unsigned_int;
	size_t			len;

	unsigned_int = va_arg(list, unsigned int);
	len = long_len((long) unsigned_int);
	ft_put_unsigned_nbr(unsigned_int);
	return (len);
}

int	print_upperhexa(va_list list)
{
	unsigned int	hexa;
	size_t			len;
	char			*hexastr;

	hexa = va_arg(list, unsigned int);
	len = hexa_len((unsigned int) hexa);
	hexastr = ft_int_to_hexa(hexa);
	ft_str_toupper(hexastr);
	ft_putstr_fd(hexastr, 1);
	free(hexastr);
	return (len);
}

int	print_lowerhexa(va_list list)
{
	unsigned int	hexa;
	size_t			len;
	char			*hexastr;

	hexa = va_arg(list, unsigned int);
	len = hexa_len((unsigned int) hexa);
	hexastr = ft_int_to_hexa(hexa);
	ft_putstr_fd(hexastr, 1);
	free(hexastr);
	return (len);
}

int	print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
