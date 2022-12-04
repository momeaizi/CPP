NAME = Harl2.0


CC = c++ -std=c++98 

CPPFLAGS =  -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g

SRCS =	main.cpp \
		Harl.cpp

OBJS:=$(SRCS:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	$(CC)   $(CPPFLAGS) $(OBJS)  -o $(NAME)


clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : clean all