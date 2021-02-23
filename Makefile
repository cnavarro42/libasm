# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 10:55:20 by cnavarro          #+#    #+#              #
#    Updated: 2021/02/23 12:57:30 by cnavarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

SRCS		= ./srcs/ft_strlen.s

NASM		= nasm

NFLAGS      = -f macho64

OBJS		= $(SRCS:.s=.o)

GCC			= @gcc

FLAGS		= -Wall -Wextra -Werror #-g

$(NAME):	$(OBJS)
				@echo "\033[0;31m[Actualizando Biblioteca]"
				ar rcs $(NAME) $(OBJS)
				@echo "\033[0m"

%.o: %.s
	@echo "\033[0;32mGenerando archivos .o"
	$(NASM) $(NFLAGS) $(SRCS)
	@echo "\033[0m"

all:		$(NAME)

clean:
	-@rm -f $(OBJS)

fclean: clean
	@echo "\033[0;31mBorrando biblioteca..."
	-@rm -f all
	@echo "\033[0m"
re:	fclean all