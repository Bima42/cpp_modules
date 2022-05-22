NAME = megaphone

SRCS = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -std=c++98

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(CPP_FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
