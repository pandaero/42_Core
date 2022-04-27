# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 18:56:50 by pandalaf          #+#    #+#              #
#    Updated: 2022/04/27 23:37:15 by pandalaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra
SRCS := ft_isalpha.c ft_isdigit.c
OBJS := $(SRCS)
OBJ_DIR := obj/

all: $(NAME)
	$(CMPLR)
$(NAME):

clean:
	rm -fr $(OBJ_DIR)
fclean: clean
	rm 
re: fclean all
$(OBJ_DIR)%.o: $(SRCS)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $^
libft.a:
	ar rc libft.a ft_xx.o ft_xx.o
	gcc -c *.c
libft.h:
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tokiwer.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
obj/%.o: src/%.c