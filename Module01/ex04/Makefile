NAME = sed


CC = c++ -std=c++98 

CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SRCS =	main.cpp \
		replace.cpp

OBJS:=$(SRCS:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	$(CC)   $(CPPFLAGS) $(OBJS)  -o $(NAME)


clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : clean all
