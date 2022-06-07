NAME = harlFilter

SRCS =	main.cpp Harl.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(CPP_FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
