NAME = push_swap

SRCS = main.c swap.c push.c rotate.c reverse_rotate.c two_and_three.c utils/ft_atoi.c utils/ft_lstnew.c utils/ft_split.c utils/ft_lstadd_back.c utils/ft_lstlast.c utils/ps_utils.c

CFLAGS = -Wall -Wextra -Werror
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

