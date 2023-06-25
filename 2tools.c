/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2tools.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:25:18 by hsami             #+#    #+#             */
/*   Updated: 2023/06/23 16:26:31 by hsami            ###   ########.fr       */
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
