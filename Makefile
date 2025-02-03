NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
SRCS := ft_printf.c ft_putnbr_hex.c ft_printunsdec.c ft_putptr.c \
       ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

# Rule to compile the library
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile the source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to remove object files
clean:
	rm -f $(OBJS)

# Rule to remove object files and the library
fclean: clean
	rm -f $(NAME)

# Rule to recompile everything
re: fclean all
