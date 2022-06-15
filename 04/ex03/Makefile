NAME = materia
NAME_e = materia_eval

SRCS =	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
SRCS_e =	main_eval.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror -pedantic
CPP_FLAGS = -std=c++98

OBJS = $(SRCS:.cpp=.o)
OBJS_e = $(SRCS_e:.cpp=.o)

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

$(NAME_e) :	$(OBJS_e)
			@echo $(Y)Compiling [$(SRCS_e)]...$(X)
			@echo $(G)Finished [$(SRCS_e)]$(X)
			@echo
			@echo $(Y)Compiling [$(NAME_e)]...$(X)
			@$(CC) $(FLAGS) $(CPP_FLAGS) -o $(NAME_e) $(OBJS_e)
			@echo $(G)Finished [$(NAME_e)]$(X)

eval: $(NAME_e)
			@echo $(Y)Compiling [$(SRCS_e)]...$(X)
			@echo $(G)Finished [$(SRCS_e)]$(X)
			@echo
			@echo $(Y)Compiling [$(NAME_e)]...$(X)
			@$(CC) $(FLAGS) $(CPP_FLAGS) -o $(NAME_e) $(OBJS_e)
			@echo $(G)Finished [$(NAME_e)]$(X)

clean:
			@rm -rf $(OBJS) $(OBJS_e)
			@echo $(R)Removed [$(OBJS)][$($(OBJS_e))]$(X)

fclean: clean
			@rm -rf $(NAME) $(NAME_e)
			@echo $(R)Removed [$(NAME)][$(NAME_e)]$(X)

re : fclean all

.PHONY: all clean fclean re eval
