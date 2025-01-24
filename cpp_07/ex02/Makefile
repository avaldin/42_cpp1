SRCS    =   main.cpp\

HDRS	=	Array.hpp\

OBJS    =    $(SRCS:.cpp=.o)

NAME    =    cpp

CXX        =    c++

FLAGS    =    -Wall -Wextra -Werror -std=c++98 -g

all			:	$(NAME)

%.o        :    %.cpp $(HDRS)
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME)    :    $(OBJS) Makefile
	$(CXX) $(OBJS) -o $(NAME)

clean    :
	rm -f $(OBJS)

fclean    :    clean
	rm -f $(NAME)

re        :    fclean all