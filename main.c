/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:51:35 by hsami             #+#    #+#             */
/*   Updated: 2023/07/01 17:51:38 by hsami            ###   ########.fr       */
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
	printf("%s\n", "THIS IS MY STRING"); 
	ft_printf("%s\n", "THIS IS MY STRING"); 
	printf("%x\n", 15); 
	ft_printf("%x\n", 15);
	printf("%X\n", 15);
	ft_printf("%X\n", 15);
	printf("%d\n", a);
	ft_printf("%d\n", a); 
	printf("%%\n");  
 	ft_printf("%%\n");
	printf("%s\n", "hatim");
	ft_printf("%s\n", "hatim");
}