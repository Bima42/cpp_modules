NAME = zombie

SRCS =	main.cpp \
		ZombieHorde.cpp \
		Zombie.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(CPP_FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
