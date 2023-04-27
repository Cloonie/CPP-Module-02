B_GREEN=	\033[38;5;121m
B_RED	=	\033[38;5;204m
C_GREEN	=	\033[0;32m
C_RED	=	\033[0;31m
C_BLUE	=	\033[0;34m
C_END 	=	\033[0m
C_ENDR	=	\033[0m\r

NAME		=	a.out
CC			=	g++
CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98
RM			=	rm -rf

SRCS		=	main.cpp	\
				Fixed.cpp	\

OBJS		=	$(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(B_GREEN)$(NAME): Executable sucessfully compiled.$(C_ENDR)"

%.o : %.cpp
	@printf "$(B_GREEN)Compiling $<...$(C_ENDR)"
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@echo "$(B_RED)clean: Removing object files...$(C_END)"
	@$(RM) $(OBJS)

fclean: clean
	@echo "$(B_RED)fclean: Removing program file...$(C_END)"
	@$(RM) $(NAME)

re:	fclean all