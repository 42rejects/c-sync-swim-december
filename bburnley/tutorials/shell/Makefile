.SUFFIXES:
.SUFFIXES: .c .o

OUTPUT = shell

COMPILER = gcc -Wall -Werror -Wextra

HEADER = ./includes/

OPTION = -c -I $(HEADER)

SRCS = ./srcs/*.c

OBJS = ./*.o

all = $(OUTPUT)

$(OUTPUT):
	$(COMPILER) $(OPTION) $(SRCS)
	$(COMPILER) -o $(OUTPUT) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(OUTPUT)

re: fclean all

.PHONY: clean fclean all re
