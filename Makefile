# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 10:39:51 by pandalaf          #+#    #+#              #
#    Updated: 2022/04/28 12:07:11 by pandalaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRCS := ft_isalpha.c ft_isdigit.c
OBJS := $(SRCS:.c=.o)
OBJ_DIR := obj/

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -fr $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJ_DIR)$(OBJS).o: $(SRCS)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $^
