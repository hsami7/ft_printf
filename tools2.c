/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:25:18 by hsami             #+#    #+#             */
/*   Updated: 2023/07/18 19:26:11 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_put_unsigned_nbr(unsigned int n)
{
	unsigned int	temp;

	temp = n;
	if (temp < 10)
	{
		ft_putchar_fd(temp + '0', 1);
	}
	else
	{
		ft_put_unsigned_nbr(temp / 10);
		ft_put_unsigned_nbr(temp % 10);
	}
}

void	ft_str_toupper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	ft_print_nbr(unsigned long long n, int mode, int base)
{
	unsigned long long	n_temp;
	int					count;

	n_temp = n;
	count = 0;
	while (n_temp > 0)
	{
		count++;
		n_temp = n_temp / base;
	}
	if (n != 0) 
	{
		ft_print_nbr((n / base), mode, base);
		if ((n % base) < 10)
			ft_putchar_fd((n % base) + 48, 1);
		else
			ft_putchar_fd((n % base) + mode, 1);
	}
	return (count);
}
