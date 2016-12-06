# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bburnley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 11:19:37 by bburnley          #+#    #+#              #
#    Updated: 2016/11/10 15:34:00 by bburnley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUTPUT = ft_display_file

COMPILER = gcc -Wall -Werror -Wextra -I includes -c

SRCS = srcs/main.c \
	   srcs/ft_display_file.c

OBJS = main.o \
	   ft_display_file.o

all = $(OUTPUT)

$(OUTPUT):
	$(COMPILER) $(SRCS) 
	gcc -Wall -Wextra -Werror -o $(OUTPUT) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(OUTPUT)

.PHONY: all clean fclean
