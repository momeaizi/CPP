NAME =	Polymorphism


CXX = c++ 

CPPFLAGS = -std=c++98  -Wall -Wextra -Werror -fsanitize=address -g

SRCS =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp

OBJS:=$(SRCS:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX)   $(CPPFLAGS) $(OBJS)  -o $(NAME)


clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
