NAME		= printf.a

CC		= cc
CFLAGS		= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

SRCS		= ft_cases.c \
		  ft_find_flags.c \
		  ft_find_numbers.c \
		  ft_flags.c \
		  ft_print_c.c \
		  ft_print_di.c \
		  ft_print_p.c \
		  ft_print_s.c \
		  ft_print_spaces.c \
		  ft_print_u.c \
		  ft_print_x.c \
		  ft_print_X.c \
		  ft_printf.c \
		  ft_uitoa.c

OBJS		= $(SRCS:.c=.o)

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re