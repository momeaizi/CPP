NAME =	DiamondTrap


CXXll = c++ 

CPPFLAGS = -std=c++98  -Wall -Wextra -Werror -fsanitize=address -g

SRCS =	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp

OBJS:=$(SRCS:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	$(CXXll)   $(CPPFLAGS) $(OBJS)  -o $(NAME)


clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all