/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehrotr <amehrotr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:48 by hsami             #+#    #+#             */
/*   Updated: 2023/07/10 18:28:59 by amehrotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
//print cases
int		percent_cases(va_list list, const char c);
int		print_char(va_list list);
int		print_string(va_list list);
int		print_intiger(va_list list);
int		print_pointer(va_list list);
int		print_unsigned(va_list list);
int		print_upperhexa(va_list list);
int		print_lowerhexa(va_list list);
int		print_percent(void);
int		print_u_l_u_p(va_list list, const char c);
//tools
char	*ft_int_to_hexa(unsigned long n);
size_t	hexa_len(unsigned long n);
size_t	hexa_len(unsigned long n);
size_t	long_len(long n);
void	ft_put_unsigned_nbr(unsigned int n);
void	ft_str_toupper(char *str);

#endif