# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bburnley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 10:13:26 by bburnley          #+#    #+#              #
#    Updated: 2016/11/08 17:26:05 by bburnley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libft.a

COMPLIER = gcc

HEAD = includes

FLAGS = -Wall -Werror -Wextra -I $(HEAD) -c

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o

all: $(LIB_NAME)

$(LIB_NAME):
	$(COMPLIER) $(FLAGS) $(SRC)
	ar q $(LIB_NAME) $(OBJ)
	ranlib $(LIB_NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(LIB_NAME)

re: fclean all

.PHONY: clean fclean all re
