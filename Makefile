NAME = push_swap

SRCS = main.c swap.c push.c rotate.c reverse_rotate.c two_three_four_five.c radix.c doubled.c utils/ft_atoi.c utils/ft_lstnew.c utils/ft_split.c utils/ft_lstadd_back.c utils/ft_lstlast.c utils/ps_utils.c utils/ft_strlen.c

CFLAGS = -g3 -Wall -Wextra -Werror
REMOVE = rm -f
CC = gcc

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

