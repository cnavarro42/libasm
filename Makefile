# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 10:55:20 by cnavarro          #+#    #+#              #
#    Updated: 2021/03/03 14:01:03 by cnavarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libasm.a

SRCS_ASM	=	ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_read.s ft_write.s

SRCS		=	$(addprefix srcs/, $(SRCS_ASM))

NFLAGS      =	-f macho64

OBJS		=	$(SRCS:.s=.o)

GCC			=	gcc

FLAGS		=	-Wall -Wextra -Werror #-g

%.o: %.s
	@echo "\033[0;32mGenerando archivos .o"
	nasm $(NFLAGS) $< -o $@
	@echo "\033[0m"

$(NAME):	$(OBJS) libasm.h
				@echo "\033[0;31m[Actualizando Biblioteca]"
				ar rcs $(NAME) $(OBJS)
				@echo "\033[0m"

all:		$(NAME)

clean:
	-@rm -f $(OBJS)

fclean: clean
	@echo "\033[0;31mBorrando biblioteca..."
	-@rm -f libasm.a
	-@rm -f all
	@echo "\033[0m"
re:	fclean all