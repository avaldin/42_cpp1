SRCS    =   main.cpp\
			Bureaucrat.cpp\
			Form.cpp\


HDRS	=	Bureaucrat.hpp\
			Form.hpp\

OBJS    =    $(SRCS:.cpp=.o)

NAME    =    exec

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