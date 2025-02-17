NAME = a.out
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -g3 

SRCS = main.cpp \
	Fixed.cpp \

OBJS = $(SRCS:.cpp=.o) 

.cpp.o:
	@$(CC) $(FLAGS) -c -o $@ $< 

all: $(NAME)
        
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1mFixed v2 built\033[0m"

clean:
	@rm -rf $(OBJS)
	@echo "c'est clean"

fclean: clean
	@rm -rf $(NAME)
	@echo "c'est fclean"

re: fclean all

.PHONY: all, clean, fclean, re
