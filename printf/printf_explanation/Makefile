# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 22:54:21 by dantavar          #+#    #+#              #
#    Updated: 2022/05/25 13:48:47 by dantavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 
CFLAGS = -Wall -Werror -Wextra

LIBFT = libft

NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_utils.c
OBJS = $(SRCS:.c=.o)

RM	= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f *.o
	make clean -C $(LIBFT)

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)/libft.a

re: fclean all
.PHONY: all re fclean clean