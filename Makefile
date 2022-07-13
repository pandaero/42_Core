# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 10:39:51 by pandalaf          #+#    #+#              #
#    Updated: 2022/06/03 11:13:49 by pandalaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRCS :=	ft_isalpha.c ft_toupper.c ft_isdigit.c ft_tolower.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
		
		
OBJ_DIR := obj/
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

.PHONY: clean fclean re

clean:
	rm -fr $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(addprefix $(OBJ_DIR), %.o): %.c | $(OBJ_DIR)
	$(CC) -c $(CFLAGS) $^ -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
