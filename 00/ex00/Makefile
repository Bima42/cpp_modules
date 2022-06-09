NAME = megaphone

SRCS =	megaphone.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror -pedantic
CPP_FLAGS = -std=c++98

OBJS = $(SRCS:.cpp=.o)
OBJSe = $(SRCSe:.cpp=.o)

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

all: $(NAME) 

%.o: %.cpp
			@echo $(Y)Compiling [$<]...$(X)
			@$(CC) $(FLAGS) $(CPP_FLAGS) -c $< -o $@
			@printf $(UP)$(CUT)

$(NAME) :	$(OBJS)
			@echo $(Y)Compiling [$(SRCS)]...$(X)
			@echo $(G)Finished [$(SRCS)]$(X)
			@echo
			@echo $(Y)Compiling [$(NAME)]...$(X)
			@$(CC) $(FLAGS) $(CPP_FLAGS) -o $(NAME) $(OBJS)
			@echo $(G)Finished [$(NAME)]$(X)

clean:
			@rm -rf $(OBJS)
			@echo $(R)Removed [$(OBJS)]$(X)

fclean: clean
			@rm -rf $(NAME)
			@echo $(R)Removed [$(NAME)]$(X)

re : fclean all

test : all
			@echo
			@echo 🚧 ==== TEST : NO ARG ==== 🚧
			@./$(NAME)
			@echo
			@echo 🚧 ==== TEST : coucou ==== 🚧
			@./$(NAME) coucou
			@echo
			@echo 🚧 ==== TEST : Bonjour Je Test ==== 🚧
			@./$(NAME) "Bonjour Je Test"
			@echo
			@echo 🚧 ==== TEST : TeSt0123 ==== 🚧
			@./$(NAME) TeSt0123
			@echo
			

.PHONY: all clean fclean re test
