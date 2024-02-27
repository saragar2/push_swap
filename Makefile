NAME = push_swap

SRCS = main.c ft_atoi.c ft_lstnew.c ft_split.c ft_lstadd_back.c ft_lstlast.c ps_utils.c swap.c push.c

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

