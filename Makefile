NAME := libftprintf.a

CC := cc
CFLAGS := -Wall -Wextra -Werror -I.

SRC := \
    ft_printf.c ft_printunsdec.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_hex.c \
	ft_putptr.c  ft_strlen.c \


OBJ := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) $(OBJ)

re: fclean all
