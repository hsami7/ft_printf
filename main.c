/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:23:19 by hsami             #+#    #+#             */
/*   Updated: 2023/06/30 17:30:22 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{    
int a = 19;
	printf("%d\n", 2147483647);
	ft_printf("%d\n", 2147483647);
	printf("%c\n", '#');
	ft_printf("%c\n", '#');
	printf("%lu\n", 21474836472); 
	ft_printf("%lu\n", 21474836472);
	printf("%s\n", "THIS IS MY STRING"); 
	ft_printf("%s\n", "THIS IS MY STRING"); 
	printf("%x\n", 15); 
	ft_printf("%x\n", 15);
	printf("%X\n", 15);
	ft_printf("%X\n", 15);
	printf("%d\n", a);
	ft_printf("%d\n", a); 
	printf("%%");  
 	ft_printf("%%");
	printf("%s\n", "hatim");
	ft_printf("%s\n", "hatim");
} 