NAME = fragtrap

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(OBJS):  %.o: %.cpp
			$(CC) $(FLAGS) $(CPP_FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
			$(CC) $(FLAGS) $(CPP_FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean: clean
			rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
