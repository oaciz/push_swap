SRC		= main.c checks.c checks_2.c r_commands.c \
			p_commands.c rr_commands.c s_commands.c \
			ft_sorting.c extra.c radix_sort.c 

OBJS	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

LBFT	= ./42-Libft-master/libft.a

NAME	= push_swap

all: $(NAME)

$(NAME): $(SRC)
	@make -C ./42-Libft-master
	@$(CC) $(SRC) $(LBFT) -o push_swap

clean:
	@make clean -C ./42-Libft-master
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) -f $(NAME)
	@make clean -C ./42-Libft-master
	@make fclean -C ./42-Libft-master

re: fclean all

.PHONY: all clean fclean re