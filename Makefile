# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 10:55:20 by cnavarro          #+#    #+#              #
#    Updated: 2021/02/10 12:37:57 by cnavarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

SRCS		= 

BONS		= 

OBJS		= 

GCC			= gcc
FLAGS		= -Wall -Wextra -Werror -g

all:		$(NAME)

$(NAME):	$(OBJS)
				@echo "\033[0;31m[Borrando version anterior...]"
				@rm -rf libasm

fclean: clean
	rm -f all

clean: 

re:	fclean