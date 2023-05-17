CC = cc
CFLAGS = -Wall -Wextra -Werror  -g
NAME = push_swap
SOURCES = push.c rotate.c reverse.c swap.c push_swap.c error.c sort_3.c sort_4.c sort_5.c sort_100.c  sort_500.c ft_split.c create_node.c free_functions.c linked_list.c utils.c short.c ft_atoi.c
OBJECTS = $(SOURCES:.c=.o)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "\033[1;32mDONE!\033[0m"

OBJTS: $(SOURCES)
	$(CC) $(CFLAGS) -c $^

clean : 
	@echo "\033[36mCleaning push_swap....\033[0m"
	@rm -rf $(OBJECTS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all