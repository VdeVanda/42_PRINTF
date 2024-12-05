NAME = libftprintf.a

SOURCE = ft_print_hex.c \
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_print_ptr.c \

OBJ = $(SOURCE:.c=.o)

CC = cc
AR = ar rcs
RM = rm -f
FLAGS = #-Wall -Wextra -Werror

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
