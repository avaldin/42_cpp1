SRCS    =   megaphone.cpp

OBJS    =    $(SRCS:.cpp=.o)

NAME    =    megaphone

CXX        =    c++

FLAGS    =    -Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

%.o        :    %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME)    :    $(OBJS) Makefile
	$(CXX) $(OBJS) -o $(NAME)

clean    :
	rm -f $(OBJS)

fclean    :    clean
	rm -f $(NAME)

re        :    fclean all