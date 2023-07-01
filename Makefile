# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 22:10:53 by hsami             #+#    #+#              #
#    Updated: 2023/07/01 17:20:12 by hsami            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c print_c_s_i_p.c print_u_x_X_.c tools.c tools2.c\

C_FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

LIBFT = ./libft/libft.a

all : $(NAME)
$(NAME) : $(OBJ)
		make -C ./libft
		cp $(LIBFT) $(NAME)
		ar -rc $(NAME) $(OBJ)
%.o : %.c
		cc $(C_FLAGS) -c $< -o $@

clean : 
		rm -f $(OBJ) $(OBJ_B)
fclean : clean
		rm -f $(NAME)
re : fclean all