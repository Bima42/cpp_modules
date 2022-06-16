NAME = convert

SRCS =	main.cpp Convert.cpp conversion.cpp

CC = g++-11
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

test: $(NAME)
			@echo 🚧 ===== TEST : nan === 🚧
			@./$(NAME) nan
			@echo
			@echo 🚧 ===== TEST : +inf === 🚧
			@./$(NAME) +inf
			@echo
			@echo 🚧 ===== TEST : string === 🚧
			@./$(NAME) string
			@echo
			@echo 🚧 ===== TEST : 60 === 🚧
			@./$(NAME) 60
			@echo
			@echo 🚧 ===== TEST : 78.8 === 🚧
			@./$(NAME) 78.8
			@echo
			@echo 🚧 ===== TEST : 2147483647 === 🚧
			@./$(NAME) 2147483647
			@echo
			@echo 🚧 ===== TEST : 21474836497.8 === 🚧
			@./$(NAME) 21474836497.8
			@echo
			@echo 🚧 ===== TEST : No argument === 🚧
			@./$(NAME)

clean:
			@rm -rf $(OBJS)
			@echo $(R)Removed [$(OBJS)]$(X)

fclean: clean
			@rm -rf $(NAME)
			@echo $(R)Removed [$(NAME)]$(X)

re : fclean all

.PHONY: all clean fclean re test
