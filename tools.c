/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:00:39 by hsami             #+#    #+#             */
/*   Updated: 2023/06/23 16:25:14 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_hexa_dup( unsigned long n)
{
	if ((n % 16) > 9)
		return ((n % 16) + 97 - 10);
	else
		return (n % 16 + '0');
}

char	*ft_int_to_hexa(unsigned long n)
{
	size_t	len;
	char	*hexastr;

	len = hexa_len(n);
	hexastr = (char *) malloc((len + 1) * sizeof(char));
	if (!hexastr)
		return (0);
	hexastr[len--] = '\0';
	if (n == 0)
	{
		hexastr[0] = '0';
		return (hexastr);
	}
	while (n != 0)
	{
		hexastr[len] = ft_hexa_dup(n);
		n = n / 16;
		len--;
	}
	return (hexastr);
}

size_t	hexa_len(unsigned long n)
{
	size_t	n_len;

	if (n == 0)
		return (1);
	n_len = 0;
	while (n != 0)
	{
		n /= 16;
		n_len++;
	}
	return (n_len);
}

size_t	long_len(long n)
{
	int	chars_n;

	chars_n = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		chars_n = 1;
	while (n != 0)
	{
		n /= 10;
		chars_n++;
	}
	return (chars_n);
}
