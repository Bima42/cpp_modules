NAME = array
NAME_e = array_eval

SRCS =	main.cpp
SRCSe = main_eval.cpp

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

$(NAME_e) : $(OBJSe)
			@echo $(Y)Compiling [$(SRCSe)]...$(X)
			@echo $(G)Finished [$(SRCSe)]$(X)
			@echo
			@echo $(Y)Compiling [$(NAME_e)]...$(X)
			@$(CC) $(FLAGS) $(CPP_FLAGS) -o $(NAME_e) $(OBJSe)
			@echo $(G)Finished [$(NAME_e)]$(X)

eval: $(NAME_e)

clean:
			@rm -rf $(OBJS) $(OBJSe)
			@echo $(R)Removed [$(OBJS)][$(OBJSe)]$(X)

fclean: clean
			@rm -rf $(NAME) $(NAME_e)
			@echo $(R)Removed [$(NAME)][$(NAME_e)]$(X)

re : fclean all

.PHONY: all clean fclean re eval
