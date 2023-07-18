/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_x_X_.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:25:56 by hsami             #+#    #+#             */
/*   Updated: 2023/07/18 19:12:35 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	print_unsigned(va_list list)
{
	unsigned int	n;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_print_nbr(n, 48, 10));
}

int	print_upperhexa(va_list list)
{
	unsigned int	n;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_print_nbr(n, 55, 16));
}

int	print_lowerhexa(va_list list)
{
	unsigned int	n;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_print_nbr(n, 87, 16));
}

int	print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
