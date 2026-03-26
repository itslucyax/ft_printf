#VARIABLES
NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs

#ARCHIVOS FUENTE
SRCS	= ft_printf.c \
		  ft_printf_utils.c \
		  ft_printf_numbers.c

OBJS	= $(SRCS:.c=.o)

#LIBRERIA
LIBFT	= libft/libft.a

#REGLAS
all: $(NAME)

$(NAME):  $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
